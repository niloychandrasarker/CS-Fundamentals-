//codeforces problem :: C. Next Alphabet
#include <stdio.h>

int main()
{
    char c,next_char;
    scanf("%c", &c);
    if(c==122)
    {
        printf("a\n");
    }
    else
    {
        printf("%c\n",c + 1);
    }
    return 0;
}
