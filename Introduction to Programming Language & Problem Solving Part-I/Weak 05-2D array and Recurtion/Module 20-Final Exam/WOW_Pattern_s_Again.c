#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        // print leading spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

             // print the ^ characters
           for (int j = 1; j <= 2 * i - 1; j++) {
           if (i%2==1)
           {
             printf("^");
           }
           else
           {
            printf("*");
           }
        }

        // print  spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        printf("\n");
    }

    return 0;
}
