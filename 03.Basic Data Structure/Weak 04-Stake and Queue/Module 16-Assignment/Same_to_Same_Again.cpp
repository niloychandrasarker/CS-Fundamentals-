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
class myQueue
{
public:
    list<int> l;
    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {
        l.pop_front();
    }
    int front()
    {
        return l.front();
    }
    int size()
    {
        return l.size();
    }
    bool empty()
    {
        return l.empty();
    }
};
int main()
{
    myStake st;
    myQueue q;
    int n,m;
       cin>>n>>m;
      for(int i=0 ; i<n ; i++)
      {
            int x;
            cin>>x;
            st.push(x);
      }
      
      for(int i=0 ; i<m ; i++)
      {
            int x;
            cin>>x;
            q.push(x);
      }
      if(st.size()!=q.size())
      {
            cout<<"NO"<<endl;
             return 0;
      }
      bool flag=true;
      while(!st.empty())
      {
            if(st.top()!=q.front())
            {
                  flag=false;
                  break;
            }
            st.pop();
            q.pop();
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