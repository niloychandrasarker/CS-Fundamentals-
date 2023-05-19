#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    if (a == 0) {
        printf("NO\n");
    } else if (b == 0) {
        if (a % 2 == 0) {
            printf("NO\n");
        } else {
            printf("YES\n");
        }
    } else {
        if (a % 2 == 0) {
            a--;
        }
        if (b % 2 == 0) {
            b--;
        }
        if (a + b > 0) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
