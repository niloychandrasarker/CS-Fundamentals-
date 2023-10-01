#include<bits/stdc++.h>
using namespace std;
vector<int> adj[1000];
bool visited[1000];

void dfs(int u)
{
      visited[u]=true;   
      for(int v : adj[u])
      {
            if(visited[v]==true) continue;
            dfs(v);
      }
}
void bfs(int s)
{
      queue<int> q;
      q.push(s);
      visited[s]=true;  

      while(!q.empty())
      {
            int u = q.front();
            q.pop();

            for(int v : adj[u])
            {
                  if(visited[v]== true) continue;
                  q.push(v);
                  visited[v]=true;
                 
            }
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
      adj[v].push_back(u);
    }
    int cc=0;
    for(int i=0 ; i<=n ; i++)
    {
      if(visited[i]) continue;
      bfs(1);
      cc++;
    }
   cout << cc <<  " ";
    return 0;
}