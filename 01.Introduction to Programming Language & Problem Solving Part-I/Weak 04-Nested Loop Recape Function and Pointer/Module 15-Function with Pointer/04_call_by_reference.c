#include<stdio.h>
void fun(int *p)
{
    printf("main er x er value - %d\n",*p);
    *p=500;
}
int main()
{
    int x=100;
    printf("main x er value- %d\n",x);
    fun(&x);
    printf("%d",x);
    return 0;
}