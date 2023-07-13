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
      string s;
      cin>>s;
      queue<char> q;
      for (char ch:s) 
      {
            if (!q.empty() && ((ch == 'A' && q.front() == 'B') || (ch == 'B' && q.front() == 'A'))) 
            {
                q.pop();
            } 
            else 
            {
                q.push(ch);
            }
      }
        if (q.empty())
        {
           cout<<"YES"<<endl;
        } 
        else 
        {
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}
