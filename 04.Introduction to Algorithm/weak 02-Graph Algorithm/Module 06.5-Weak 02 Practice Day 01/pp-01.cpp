#include<bits/stdc++.h>
using namespace std;
vector<int> adj[1000];
bool visited[1000];

void dfs(int u)
{
      visited[u]=true;   
      cout <<  u <<" ";
      for(int v : adj[u])
      {  
            if(visited[v]==true) continue;
            dfs(v);   
      }
}
    
int main()
{
    int n,m;
    cin>>n>>m;

    for(int i=0 ; i<m ; i++)
    {
      int u,v;
      cin>>u>>v;
      adj[u].push_back(v);
      //adj[v].push_back(u);
    }

    dfs(1);
    return 0;
}