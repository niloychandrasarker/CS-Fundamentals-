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

    int k;
    cin >> k;

    cout << adj[k].size() << endl;

    return 0;
}
