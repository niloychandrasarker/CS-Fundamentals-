#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    printf("input first string :: ");
    gets(a);\
    int st = strlen(a);
    printf("%d\n",st);
    

    char b[100];
    int count=0;
    printf("input second string :: ");
    gets(b);
    for (int i = 0; b[i] != '\0' ; i++)
    {
      count++;
    }
    printf("%d",count);

    return 0;
}