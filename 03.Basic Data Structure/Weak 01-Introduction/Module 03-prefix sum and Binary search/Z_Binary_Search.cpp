#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    int ar[n];
    for(int i=0 ; i<n ; i++)
    {
      cin>>ar[i];
    }
    sort(ar,ar+n);
    while(q--)
    {
      int x;
      cin>>x;
     bool flag=false;
    int l=0,r=n-1;
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
       if( flag==true)cout<<"found"<<endl;
    else cout<<"not found"<<endl;
    }
   
  return 0;
}

  
