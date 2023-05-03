#include <stdio.h>
void fun(int a,int b,int c)
{
       int tmp;
    if (a > b) {
        tmp = a;
        a = b;
        b = tmp;
    }
    if (b > c) {
        tmp = b;
        b = c;
        c = tmp;
    }
    if (a > b) {
        tmp = a;
        a = b;
        b = tmp;
    }

    // print the sorted numbers
    printf("%d\n%d\n%d\n\n", a, b, c);
    
       
}

int main() {
    int a, b, c;

    // read input
    scanf("%d %d %d", &a, &b, &c);
    fun(a, b, c);
   // print the original sequence
    printf("%d\n%d\n%d\n", a, b, c);

    return 0;
}
