#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 1005;
char matrix[MAX_N][MAX_N];
bool visited[MAX_N][MAX_N];
int N, M;
vector<pair<int, int>> path = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool is_valid(int x, int y) 
{
    return (x >= 0 && x < N && y >= 0 && y < M && matrix[x][y] == '.');
}

int bfs(int x, int y) 
{
    int area = 0;
    queue<pair<int, int>> q;
    q.push({x, y});
    visited[x][y] = true;

    while (!q.empty()) 
    {
        pair<int, int> current = q.front();
        q.pop();
        area++;

        for (const auto& move : path) 
        {
            int newX = current.first + move.first;
            int newY = current.second + move.second;

            if (is_valid(newX, newY) && !visited[newX][newY]) 
            {
                visited[newX][newY] = true;
                q.push({newX, newY});
            }
        }
    }

    return area;
}

int main() 
{
    cin >> N >> M;

    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < M; j++) 
        {
            cin >> matrix[i][j];
            visited[i][j] = false;
        }
    }

    int min_area = -1; 
    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < M; j++) 
        {
            if (is_valid(i, j) && !visited[i][j]) 
            {
                int component_area = bfs(i, j);
                if (min_area == -1 || component_area < min_area) 
                {
                    min_area = component_area;
                }
            }
        }
    }

    cout << min_area << endl;

    return 0;
}
