#include<stdio.h>

// return_type name(no peramiter)
// {
//     code 
//     return what? 
// }
int sum() 
{
    // code 
     int x,y;
    scanf("%d %d",&x,&y);
    int sum=x+y;
    return sum;
}
int main()
{
   
    printf("%d",sum());
    return 0;
}