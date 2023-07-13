
#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> MyQueue1;
    queue<int> MyQueue2;
    int n;
      cin>>n;
      for(int i=0 ; i<n ; i++)
      {
            int x;
            cin>>x;
            MyQueue1.push(x);
      }
      stack<int> tempStack;
      while( !MyQueue1.empty() )
      {
           tempStack.push(MyQueue1.front()) ;
           MyQueue1.pop();
      }
      while( !tempStack.empty() )
      {
           MyQueue2.push(tempStack.top()) ;
           tempStack.pop();
      }
       while( !MyQueue2.empty() )
      {
           cout << MyQueue2.front() << " ";
           MyQueue2.pop();
      }
    return 0;
}