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
    list<int> mylist;
    int val;
    while(true)
    {
      cin>>val;
      if(val==-1)
      {
            break;
      }
      mylist.push_back(val);
    }
    mylist.sort();
    mylist.unique();

    for(int value : mylist)
    {
      cout<<value<<" ";
    }
    return 0;
}