#include<stdio.h>
int main()
{
      int n;
      printf("please Insert Array Size :: ");
      scanf("%d",&n);
    int ar[n];
    printf("please Insert Array value :: \n");
    for(int i=0;i<n;i++)
    {
       printf("ar[%d]=",i);
        scanf("%d",&ar[i]);
    }
    int i=0,j=n-1;
    while (i<j)
    {
      int temp=ar[i];
      ar[i]=ar[j];
      ar[j]=temp;
      i++;
      j--;
    }
    printf("\n");
    printf("after reverse array :: \n");
    for(int i=0;i <n;i++)
    {
        printf("ar[%d]=%d\n",i,ar[i]);
    }
    return 0;
}