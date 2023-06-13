#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0 ; i<n ; i++)
    {
      cin>>ar[i];
    }
    int x;
    cin>>x;
    int l=0;
    int r=n-1;
    bool flag=false;
    while(l<=r)
    {
     int mid_index=(l+r)/2;
     if(ar[mid_index]==x)
     {
      flag = true;
      break;
     }
      if(x>ar[mid_index])
     {
     //dan e jaw
     l=mid_index + 1;
     }
      else
     {
     //bam e jaw
     r=mid_index - 1;
     }

    }
 if( flag==true) cout<<"yes"<<endl;
 else cout<<"no"<<endl;
    return 0;
}