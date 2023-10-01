#include<bits/stdc++.h>
using namespace std;
vector<int> adj[1000];
bool visited[1000];
int lavel[1000];
int parent[1000]; 

void bfs(int s)
{
      queue<int> q;
      q.push(s);
      visited[s]=true;  
      lavel[s]=0; 
      parent[s]=-1;
      while(!q.empty())
      {
            int u = q.front();
            q.pop();
            //cout << u << endl;

            for(int v : adj[u])
            {
                  if(visited[v]== true) continue;
                  q.push(v);
                  visited[v]=true;
                  lavel[v] = lavel[u]+1;
                  parent[v] = u; 
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
  int s,d;
  cin  >> s >> d;
  bfs(s);
  cout << "Distance :"<< lavel[d] << endl;   


    vector<int> path;
    int current = d;
    while(parent[current] != -1)
    {
      path.push_back(current);
      current = parent[current];
    }
    reverse(path.begin(), path.end());
    cout << "path : ";
    for(int node : path)
    {
      cout << node << " ";
    }
    return 0;
}