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
    sort(v.begin(),v.end());
    bool flag=false;
    for (int i = 1; i < n; i++) {
        if (v[i] == v[i - 1]) {
            flag = true;
            break;
        }
    }
   if(flag==true) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
    return 0;
}