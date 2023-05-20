#include<stdio.h>

// no return_type name( no parameter)
// {
//     code 
//     return what? 
// }
void sum(void) 
{
    // code 
    int x,y;
    scanf("%d %d",&x,&y);
    int sum=x+y;
     printf("%d",sum);
    
}
int main()
{
   sum();
    return 0;
}