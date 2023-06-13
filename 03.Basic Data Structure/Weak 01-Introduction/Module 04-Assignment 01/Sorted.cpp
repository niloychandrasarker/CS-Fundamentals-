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
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
      vector<int> v(n);
      for(int i=0 ; i<n ; i++)
      {
            cin>>v[i];
      }
      int flag=true;
      for(int i=0 ; i<n-1 ; i++)
      {
            if(v[i]>v[i+1])
            {
                  flag=false;
            }
      }
      if(flag==true) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
      
    }
    return 0;
}