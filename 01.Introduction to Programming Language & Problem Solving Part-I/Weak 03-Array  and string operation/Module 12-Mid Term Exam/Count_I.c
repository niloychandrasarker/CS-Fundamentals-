#include<stdio.h>
int main()
{
      int n;
      scanf("%d",&n);
      int ar[n];
      for (int i = 0; i < n; i++)
      {
            scanf("%d",&ar[i]);
      }
      int even=0,odd=0;
       for (int i = 0; i < n; i++)
      {
          if (ar[i]%2==0)
          {
            even++;
          }
            if (ar[i]%2==1)
          {
            odd++;
          } 
      }
      printf("%d %d",even,odd);
      return 0;
}