#include<stdio.h>
int main()
{
      int n;
      printf("please Insert Array-1 Size :: ");
      scanf("%d",&n);
    int ar1[n];
    printf("please Insert Array-1 value :: \n");
    for(int i=0;i<n;i++)
    {
       printf("ar1[%d]=",i);
        scanf("%d",&ar1[i]);
    }

    int m;
      printf("please Insert Array-2 Size :: ");
      scanf("%d",&m);
    int ar2[m];
    printf("please Insert Array-2 value :: \n");
    for(int i=0;i<m;i++)
    {
       printf("ar2[%d]=",i);
        scanf("%d",&ar2[i]);
    }

    int ans[m+n];
    for(int i=0;i<n;i++)
    {
       ans[i]=ar1[i];
    }
  int i=n;
  for(int j=0;j<m;j++)
    {
        ans[i]=ar2[j];
        i++;
    }
    printf("After Copying Array :: \n");
    for(int i=0;i<m+n;i++)
    {
       printf("ans[%d]=%d\n",i,ans[i]);
        
    }
    return 0;
}