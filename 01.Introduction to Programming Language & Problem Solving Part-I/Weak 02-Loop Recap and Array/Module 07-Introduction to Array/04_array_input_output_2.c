#include<stdio.h>
int main()
{
    int ar[5];
    for(int i=0;i<5;i++)
    {
       printf("ar[%d]=",i);
        scanf("%d",&ar[i]);
    }
    printf("\n");
    for(int i=0;i<5;i++)
    {
        printf("ar[%d]=%d\n",i,ar[i]);
    }
    return 0;
}