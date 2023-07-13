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
    stack<int> MyStake;
    queue<int> MyQueue;
    int n,m;
       cin>>n>>m;
      for(int i=0 ; i<n ; i++)
      {
            int x;
            cin>>x;
            MyStake.push(x);
      }
      
      for(int i=0 ; i<m ; i++)
      {
            int x;
            cin>>x;
            MyQueue.push(x);
      }
      if(MyStake.size()!=MyQueue.size())
      {
            cout<<"NO"<<endl;
             return 0;
      }
      bool flag=true;
      while(!MyStake.empty())
      {
            if(MyStake.top()!=MyQueue.front())
            {
                  flag=false;
                  break;
            }
            MyStake.pop();
            MyQueue.pop();
      }
     if(flag==true)
     {
      cout<<"YES"<<endl;
     }
     else
     {
      cout<<"NO"<<endl;
     }
    return 0;
}