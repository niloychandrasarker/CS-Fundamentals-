#include<stdio.h>
int main()
{
    // char a[6]={'N','i','l','o','y'}; 
    char a[6]="Niloy"; 
    int sz=sizeof(a)/sizeof(char);
    printf("%d\n",sz);
    printf("%s",a);
    return 0;
}