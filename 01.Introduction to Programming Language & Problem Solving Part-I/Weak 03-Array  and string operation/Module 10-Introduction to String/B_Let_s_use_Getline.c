#include<stdio.h>
#include<string.h>
int main()
{
   
    char b[1000001];
    int i;
    gets(b);
    for (int i = 0; b[i] != '\\' ; i++)
    {
      printf("%c",b[i]);
    }

    return 0;
}