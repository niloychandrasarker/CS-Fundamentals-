#include <bits/stdc++.h>
using namespace std;

int parent[100001];

int find(int n) 
{
    if (parent[n] == -1)
        return n;
    return parent[n] = find(parent[n]); 
}

int main() 
{
    int N, E;
    cin >> N >> E;

    for (int i = 1; i <= N; i++) 
    {
        parent[i] = -1;
    }

    int cycleEdges = 0;

    for (int i = 0; i < E; i++) 
    {
        int u, v;
        cin >> u >> v;

        int parentU = find(u);
        int parentV = find(v);

        if (parentU != parentV) 
        {
            
            parent[parentU] = parentV;
        } 
        else 
        {
           
            cycleEdges++;
        }
    }

    cout << cycleEdges << endl;

    return 0;
}
