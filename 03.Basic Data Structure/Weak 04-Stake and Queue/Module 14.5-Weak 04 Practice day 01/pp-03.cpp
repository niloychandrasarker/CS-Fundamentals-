#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> MyStake1;
    stack<int> MyStake2;
    int n;
       cin>>n;
      for(int i=0 ; i<n ; i++)
      {
            int x;
            cin>>x;
            MyStake1.push(x);
      }

      while(!MyStake1.empty())
      {
            MyStake2.push(MyStake1.top());
            MyStake1.pop();
      }
       while(!MyStake2.empty())
      {
            cout<<MyStake2.top()<<" ";
            MyStake2.pop();
      }
    return 0;
}