//codeforces problem :: E. Max
#include <stdio.h>

int main() {
    int n, num, max = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        if (num > max) {
            max = num;
        }
    }
    printf("%d\n", max);
    return 0;
}
