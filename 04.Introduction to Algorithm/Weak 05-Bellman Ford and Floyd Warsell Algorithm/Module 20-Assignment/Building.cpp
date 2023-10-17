#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

int parent[N];
int parentLevel[N];

void dsu_set(int n) 
{
    for (int i = 1; i <= n; i++) 
    {
        parent[i] = i;
        parentLevel[i] = 0;
    }
}

int dsu_find(int node) 
{
    if (parent[node] == node) return node;
    return parent[node] = dsu_find(parent[node]);
}

void dsu_union(int a, int b) 
{
    int leaderA = dsu_find(a);
    int leaderB = dsu_find(b);
    if (leaderA != leaderB) {
        if (parentLevel[leaderA] > parentLevel[leaderB]) 
        {
            parent[leaderB] = leaderA;
        } 
        else if (parentLevel[leaderB] > parentLevel[leaderA]) 
        {
            parent[leaderA] = leaderB;
        } 
        else 
        {
            parent[leaderB] = leaderA;
            parentLevel[leaderA]++;
        }
    }
}

int main() 
{
    int n, e;
    cin >> n >> e;
    dsu_set(n);

    vector<pair<int, pair<int, int>>> edges;

    for (int i = 0; i < e; i++) 
    {
        int a, b, w;
        cin >> a >> b >> w;
        edges.push_back({w, {a, b}});
    }

  
    sort(edges.begin(), edges.end());

    long long totalCost = 0;
    int connectedComponents = 0;

    for (auto edge : edges) 
    {
        int weight = edge.first;
        int a = edge.second.first;
        int b = edge.second.second;

        if (dsu_find(a) != dsu_find(b)) 
        {
            dsu_union(a, b);
            totalCost += weight;
            connectedComponents++;
        }

       
        if (connectedComponents == n - 1) 
        {
            break;
        }
    }

    if (connectedComponents == n - 1) 
    {
        cout << totalCost << endl;
    } 
    else 
    {
        cout << -1 << endl;
    }

    return 0;
}
