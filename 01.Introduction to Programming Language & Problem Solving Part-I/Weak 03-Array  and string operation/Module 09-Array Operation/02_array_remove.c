#include<stdio.h>
int main()
{
      int n;
      printf("insert array size :: ");
      scanf("%d",&n);
      int ar[n];
      printf("insert array value :: ");
      for (int i = 0; i < n; i++)
      {
            scanf("%d",&ar[i]);
      }
      int position;
      printf("please insert position and :: ");
      scanf("%d",&position);
        for(int i=position; i < n-1 ;i++)
    {
        ar[i]=ar[i+1];
    }
    
    for(int i=0;i<n-1;i++)
    {
        printf("%d ",ar[i]);
    }
      return 0;
}