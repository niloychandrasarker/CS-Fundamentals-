#include <stdio.h>

int main() {
    int n,s,k=1;
    scanf("%d", &n);
    s=n-1;
    // loop for each row
    for (int i = 1; i <= n; i++) {

        // print spaces for each row
        for (int j = 1; j <= s; j++) {
            printf(" ");
        }

        // print stars for each row
        for (int j = 1; j <= k; j++) {
            printf("*");
        }
        s--;
        k++;
        // move to the next line for the next row
        printf("\n");

    }
    
    return 0;
}
