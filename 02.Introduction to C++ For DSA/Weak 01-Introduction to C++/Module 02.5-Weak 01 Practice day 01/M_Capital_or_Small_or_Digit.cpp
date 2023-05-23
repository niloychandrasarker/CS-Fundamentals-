#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a;
    cin>>a;
    if (a>='0' && a<='9')
    {
      printf("IS DIGIT\n");
    }
    else
    {
      printf("ALPHA\n");
      if(a>='a' && a<='z')
      {
            printf("IS SMALL\n");
      }
      else
      {
            printf("IS CAPITAL\n");
      }
    }
    return 0;
}