/*
||-------------------------------------------||
||            Niloy Chandra Sarker           ||
|| Dept. of Computer science and Engineering ||
||   Faculty of engineering and technology   ||
||            University of Dhaka            ||
||-------------------------------------------||
*/
#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100005;
const int INF = 1e9;

vector<int> adj[MAXN];
int level[MAXN];

void bfs(int source) 
{
    queue<int> q;
    q.push(source);
    level[source] = 0;

    while (!q.empty()) 
    {
        int u = q.front();
        q.pop();

        for (int v : adj[u]) 
        {
            if (level[v] == -1) 
            {
                q.push(v);
                level[v] = level[u] + 1;
            }
        }
    }
}

int main() 
{
    int n, e;
    cin >> n >> e;

    for (int i = 0; i < e; i++) 
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    int q;
    cin >> q;

    while (q--) 
    {
        int s, d;
        cin >> s >> d;

        for (int i = 0; i < MAXN; i++) 
        {
            level[i] = -1;
        }

        bfs(s);

        if (level[d] == -1) 
        {
            cout << -1 << endl;
        } 
        else 
        {
            cout << level[d] << endl;
        }
    }

    return 0;
}
