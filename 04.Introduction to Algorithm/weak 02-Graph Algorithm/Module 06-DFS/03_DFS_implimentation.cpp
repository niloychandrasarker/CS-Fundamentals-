#include<bits/stdc++.h>
using namespace std;
vector<int> adj[1000];
bool visited[1000];

void dfs(int u)
{
      //section 1 : action just after  entering node u  
      visited[u]=true;   
      cout <<  u <<" ";
      for(int v : adj[u])
      {
            //section 2 : action before  entering a new neighbor
            if(visited[v]==true) continue;
            dfs(v);
            //section 3 : action after  exiting a new neighbor
      }
      //section 4 : action before exiting node u
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

//     for(int i=1 ; i<=n ; i++)
//     {
//       cout<< "List " << i << ": ";
//       for(auto val:adj[i])
//       {
//           cout<<val<<" ";
//       }
//       cout<<endl;
//     }
    dfs(1);
    return 0;
}