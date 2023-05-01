#include<stdio.h>
// global

void fun(void)
{
      int x=500;
     printf("fun er x er address - %p\n",&x);
}
int main()
{
      int x=500;
     printf("Main er x er address - %p\n",&x);

     fun();

   
    return 0;
}