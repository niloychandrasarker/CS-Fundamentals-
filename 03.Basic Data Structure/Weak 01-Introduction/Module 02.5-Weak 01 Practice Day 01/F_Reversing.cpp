#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v1(n);
    for(int i=0 ; i<v1.size() ; i++)
    {
      cin>>v1[i];
    }
   
    reverse(v1.begin(),v1.end());
    for(int x:v1)
    {
      cout<<x<<" ";
    }
    return 0;
}