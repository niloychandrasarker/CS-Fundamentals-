#include <bits/stdc++.h>
using namespace std;

const int N = 1005;
char grid[N][N];
bool visited[N][N];
int n, m;
vector<pair<int, int>> path = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool isValid(int x, int y) 
{
    return x >= 0 && x < n && y >= 0 && y < m && grid[x][y] == '.';
}

bool bfs(int si, int sj, int di, int dj) 
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    visited[si][sj] = true;

    while (!q.empty()) 
    {
        pair<int, int> current = q.front();
        q.pop();
        int x = current.first;
        int y = current.second;

        if (x == di && y == dj) 
        {
            return true;
        }

        for (const auto& move : path) 
        {
            int newX = x + move.first;
            int newY = y + move.second;

            if (isValid(newX, newY) && !visited[newX][newY]) 
            {
                visited[newX][newY] = true;
                q.push({newX, newY});
            }
        }
    }

    return false; 
}

int main() 
{
    cin >> n >> m;

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            cin >> grid[i][j];
            visited[i][j] = false;
        }
    }

    int si, sj, di, dj;
    cin >> si >> sj >> di >> dj;

    if (bfs(si, sj, di, dj)) 
    {
        cout << "YES" << endl;
    } 
    else 
    {
        cout << "NO" << endl;
    }

    return 0;
}
