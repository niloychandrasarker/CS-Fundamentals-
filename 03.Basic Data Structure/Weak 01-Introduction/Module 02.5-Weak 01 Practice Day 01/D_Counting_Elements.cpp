#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v1(n);
    for(int i=0 ; i<v1.size() ; i++)
    {
      cin>>v1[i];
    }
    int cnt=0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j && v1[i] + 1 == v1[j]) {
                cnt++;
                break;
            }
        }
    }
     
      cout<<cnt<<" ";
    
    return 0;
}