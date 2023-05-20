#include<stdio.h>
#include<string.h>
int main()
{
    //using built in function
    char a[100],b[100];
    scanf("%s %s",a,b);
    strcpy(a,b);
    printf("%s %s",a,b);

    //using logic
    char c[100],d[100];
    scanf("%s %s",c,d);
    for (int i = 0; i <= strlen(d); i++)
    {
      c[i]=d[i];
    }
    printf("%s %s",c,d);
    return 0;

}