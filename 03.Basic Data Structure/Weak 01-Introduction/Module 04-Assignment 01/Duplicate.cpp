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
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0 ; i<n ; i++)
    {
      cin>>v[i];
    }
    vector<int> freq(1000001, 0);
    bool flag=false;
    for(int x:v)
    {
      if(freq[x]>0)
      {
            flag=true;
            break;
      }
      freq[x]++;
    }
   if(flag==true) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;

    return 0;
}