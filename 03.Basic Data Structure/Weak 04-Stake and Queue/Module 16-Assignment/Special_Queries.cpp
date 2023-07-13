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
    queue<string> line;
    int q;
    cin>>q;
    for(int i=0 ; i<q ; i++)
    {
      int cmnd;
      cin>>cmnd;
      if(cmnd==0)
      {
            string name;
            cin>>name;
            line.push(name);
      }
      else if(cmnd==1)
      {
            if(!line.empty())
            {
                  cout<<line.front()<<endl;
                  line.pop();
            }
            else
            {
                  cout<<"Invalid"<<endl;
            }
      }
    }
    return 0;
}