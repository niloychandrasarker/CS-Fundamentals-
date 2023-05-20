#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; i++) {
        sum1 += a[i][i];
        sum2 += a[i][n-1-i];
    }

    int diff = abs(sum1 - sum2);
    printf("%d\n", diff);

    return 0;
}
