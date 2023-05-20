#include<stdio.h>
int main()
{
      long long int n;
       long long int sum=0;
     scanf("%lld",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&ar[i]);
        sum += ar[i];
    }
    if (sum < 0)
    {
      sum = (-1)*sum;
    }
   
    printf("%lld",sum);
    return 0;
}