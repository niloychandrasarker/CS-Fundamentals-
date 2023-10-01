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

int const N=1000;

vector<int> adj[1001];
bool visited[1001];

int bfs(int s) 
{
    queue<int> q;
    q.push(s);
    visited[s] = true;
    int componentSize = 0;

    while (!q.empty()) 
    {
        int u = q.front();
        q.pop();
        componentSize++;

        for (int v : adj[u]) 
        {
            if (!visited[v]) 
            {
                q.push(v);
                visited[v] = true;
            }
        }
    }

    return componentSize;
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

    vector<int> componentSizes;

    for (int i = 0; i < N; i++) 
    {
        if (!visited[i]) 
        {
            int componentSize = bfs(i);
            if (componentSize > 1) 
            {
                componentSizes.push_back(componentSize);
            }
        }
    }

    sort(componentSizes.begin(), componentSizes.end());

    if (componentSizes.empty()) 
    {
        cout << -1;
    } 
    else 
    {
        for (int size : componentSizes) 
        {
            cout << size << " ";
        }
    }

    return 0;
}
