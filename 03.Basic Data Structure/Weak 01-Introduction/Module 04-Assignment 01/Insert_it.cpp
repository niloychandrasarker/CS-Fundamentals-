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
    int a,b,k;
    cin>>a;
    vector<int> v1(a);
    for(int i=0 ; i<a ; i++)
    {
      cin>> v1[i];
    }
    cin>>b;
    vector<int> v2(b);
    for(int i=0 ; i<b ; i++)
    {
      cin>> v2[i];
    }
    cin>>k;
    v1.insert(v1.begin()+k,v2.begin(),v2.end());
     for(int x: v1)
    {
        cout<<x<<" ";
    }
    return 0;
}