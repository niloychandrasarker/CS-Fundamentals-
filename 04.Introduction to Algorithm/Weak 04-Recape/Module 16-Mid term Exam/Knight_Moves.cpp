#include <bits/stdc++.h>
using namespace std;

const int N = 1005;
int n, m;
int dis[N][N];
int ki, kj, qi, qj;
vector<pair<int, int>> path = {{-2, -1}, {-2, 1}, {-1, -2}, {-1, 2}, {1, -2}, {1, 2}, {2, -1}, {2, 1}};

bool isValid(int i, int j) 
{
    return i >= 0 && i < n && j >= 0 && j < m;
}

int minKnightSteps() 
{
    queue<pair<int, int>> q;
    q.push({ki, kj});
    dis[ki][kj] = 0;

    while (!q.empty()) 
    {
        pair<int, int> curr = q.front();
        q.pop();
        int ci = curr.first;
        int cj = curr.second;

        if (ci == qi && cj == qj) 
        {
            return dis[ci][cj];
        }

        for (pair<int, int> move : path) 
        {
            int ni = ci + move.first;
            int nj = cj + move.second;

            if (isValid(ni, nj) && dis[ni][nj] == -1) 
            {
                dis[ni][nj] = dis[ci][cj] + 1;
                q.push({ni, nj});
            }
        }
    }

    return -1;
}

int main() 
{
    int T;
    cin >> T;

    while (T--) 
    {
        cin >> n >> m;
        for (int i = 0; i < n; i++) 
        {
            for (int j = 0; j < m; j++) 
            {
                dis[i][j] = -1;
            }
        }

        cin >> ki >> kj >> qi >> qj;
        int steps = minKnightSteps();
        cout << steps << endl;
    }

    return 0;
}
