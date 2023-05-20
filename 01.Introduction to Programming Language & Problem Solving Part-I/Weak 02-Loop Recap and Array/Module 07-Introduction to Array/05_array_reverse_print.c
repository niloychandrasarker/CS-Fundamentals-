#include<stdio.h>
int main()
{
      int n;
      scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
       printf("ar[%d]=",i);
        scanf("%d",&ar[i]);
    }
    printf("\n");
    for(int i=n-1;i>=0;i--)
    {
        printf("ar[%d]=%d\n",i,ar[i]);
    }
    return 0;
}