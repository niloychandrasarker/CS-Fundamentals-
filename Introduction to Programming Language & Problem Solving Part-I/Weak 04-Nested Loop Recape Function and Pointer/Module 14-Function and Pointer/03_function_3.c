#include<stdio.h>

// no return_type name(parameter)
// {
//     code 
//     return what? 
// }
void sum(int x,int y) 
{
    // code 
    int sum=x+y;
     printf("%d",sum);
    return;
}
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
   sum(x,y);
    return 0;
}