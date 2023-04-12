#include<stdio.h>
int main()
{
      long long int a,b,c,mini;
      int count ;
      int minia,minib,minic;
      scanf("%lld %lld %d",&a,&b,&c);
      if(a<b && a<c)
      {
            printf("%d\n",a);
      }
      else if (b<a && b<c)
      {
          mini = b;
          minia = a-b;  
          minib = b-b;
          minic = c-b;
      
        if (minib == 0)
        {
           int div = minia/2;
           if (div >= minic)
           {
            int sum = minic + mini;
            printf("%d\n",sum);
           } 
           else if (div < minic)
           {
            int sum1 = div + mini;
            printf("%d\n",sum1);
           }
         }
      }
      else if (c<a && c<b)
      {
            printf("%d\n",c);
      }
      return 0;
}