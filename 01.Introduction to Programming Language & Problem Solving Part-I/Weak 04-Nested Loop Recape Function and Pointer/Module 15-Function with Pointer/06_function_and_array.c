#include<stdio.h>

void fun(double ar[],int n)
{
      for (int i = 0; i < n; i++)
      {
           printf("%.2lf ",ar[i]);
      }
      
}
int main()
{
      double ar[]={10.3,20.7,30.8,40.0,50.5};
      fun(ar,5);
      return 0;
}