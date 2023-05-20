#include <stdio.h>

long long calculateSum(int a, int b) {
    long long sum;
    if (a < b) {
        sum = ((long long)b * (b + 1)) / 2 - ((long long)a * (a - 1)) / 2;
    } else {
        sum = ((long long)a * (a + 1)) / 2 - ((long long)b * (b - 1)) / 2;
    }
    return sum;
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int a, b;
        scanf("%d %d", &a, &b);
        
        long long sum = calculateSum(a, b);
        printf("%lld\n", sum);
    }

    return 0;
}
