#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) 
    scanf("%d", &a[i]);

    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            for (int j = i - 1, k = 0; j >= k; j--, k++) {
                int temp = a[j];
                a[j] = a[k];
                a[k] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++) printf("%d ", a[i]);

    return 0;
}
