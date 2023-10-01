/*
||-------------------------------------------||
||            Niloy Chandra Sarker           ||
|| Dept. of Computer science and Engineering ||
||   Faculty of engineering and technology   ||
||            University of Dhaka            ||
||-------------------------------------------||
*/
#include<bits/stdc++.h>
using namespace std;

vector<int> adj[20];
bool visited[20];

void dfs(int u) 
{
    visited[u] = true;

    for (int v : adj[u]) 
    {
        if (!visited[v]) 
        {
            dfs(v);
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
    }

    int k;
    cin >> k;

    for (int i = 0; i < n; i++) 
    {
        visited[i] = false;
    }

    dfs(k);

    int count = 0;
    for (int i = 0; i < n; i++) 
    {
        if (visited[i]) 
        {
            count++;
        }
    }

    cout << count - 1 << endl;

    return 0;
}
