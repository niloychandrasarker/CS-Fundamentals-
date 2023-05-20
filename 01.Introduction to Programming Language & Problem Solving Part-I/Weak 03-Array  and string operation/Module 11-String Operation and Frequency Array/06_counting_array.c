#include<stdio.h>
int main()
{
while(1){

    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int cnt[1001]={0};
    for(int i=0;i<n;i++)
    {
        int val=a[i];
        cnt[val]++;
    }
    
    for(int i=0;i<=10;i++)
    {
        printf("%d - %d\n",i,cnt[i]);
    }
    
}
return 0;
}