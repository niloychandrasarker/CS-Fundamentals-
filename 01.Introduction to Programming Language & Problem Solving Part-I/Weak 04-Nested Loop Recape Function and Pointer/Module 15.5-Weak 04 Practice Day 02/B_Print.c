#include <stdio.h>

void print_numbers(int n) {
    int i;
    for (i = 1; i <= n; i++) {
        printf("%d", i);
        if (i != n) {
            printf(" ");
        }
    }
}

int main() {
    int n;

    // read input
    scanf("%d", &n);

    // call the print_numbers function
    print_numbers(n);

    return 0;
}
