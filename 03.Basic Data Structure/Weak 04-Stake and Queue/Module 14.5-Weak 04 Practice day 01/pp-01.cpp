#include<bits/stdc++.h>
using namespace std;
class myStake
{
      public:
      list<int> l;

      void push(int val)
      {
            l.push_back(val);
      }
      void pop()
      {
            l.pop_back();
      }
      int top()
      {
            return l.back();
      }
      int size()
      {
            return l.size();
      }
      bool empty()
      {
             if(l.size()==0)
              return true;
             else 
             return false;
      }
      
};
int main()
{
      myStake st1;
      myStake st2;
      int n,m;
      cin>>n;
      for(int i=0 ; i<n ; i++)
      {
            int x;
            cin>>x;
            st1.push(x);
      }
      cin>>m;
      for(int i=0 ; i<m ; i++)
      {
            int x;
            cin>>x;
            st2.push(x);
      }
      if(st1.size()!=st2.size())
      {
            cout<<"NO"<<endl;
             return 0;
      }
      bool flag=true;
      while(!st1.empty())
      {
            if(st1.top() !=  st2.top())
            {
                  flag=false;
                  break;
            }
            st1.pop();
            st2.pop();
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