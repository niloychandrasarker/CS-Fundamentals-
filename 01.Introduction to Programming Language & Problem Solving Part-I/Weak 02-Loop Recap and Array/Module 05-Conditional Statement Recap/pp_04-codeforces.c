// Codeforces problem :: P. First digit !
#include<stdio.h>
int main()
{
      int A,ans;
      scanf("%d",&A);
      ans=A/1000;
      if (ans%2==0)
      {
            printf("EVEN");
      }
      else
      {
            printf("ODD");
      }
      return 0;
}