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
    vector<long long int> v(n);
    for(int i=0 ; i<n ; i++)
    {
       cin>>v[i];
    }
    vector<long long int> pre(n);
     pre[0]=v[0];
    for(int i=1 ; i<n ; i++)
    {
      pre[i]=v[i]+pre[i-1];
    }
    // reversed prefix sum
    reverse(pre.begin(),pre.end());
    //print prefix sum in reverse way
    for(long long int val : pre)
    {
      cout<<val<<" ";
    }

    return 0;
}