#include<stdio.h>
#include<string.h>
int main()
{
     printf("please input string 1 :: ");
    char a[100];
    gets(a);
    printf("%s\n",a);
    

    printf("please input string 2 :: ");
    char b[100];
    fgets(b,19,stdin);
    printf("%s",b);
    return 0;
}