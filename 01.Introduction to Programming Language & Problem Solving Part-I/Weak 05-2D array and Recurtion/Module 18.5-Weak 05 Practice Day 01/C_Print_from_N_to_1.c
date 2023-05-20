#include <stdio.h>

void printNumbers(int n) {
    if (n == 1) {
        printf("1");
        return;
    }
    printf("%d ", n);
    printNumbers(n - 1);
}

int main() {
    int n;
    scanf("%d", &n);
    printNumbers(n);
    return 0;
}
