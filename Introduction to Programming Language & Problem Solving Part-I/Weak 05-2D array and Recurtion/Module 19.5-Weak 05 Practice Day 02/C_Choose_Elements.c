#include <stdio.h>

int main() {
    int n, k, i, j, temp;
    long long sum = 0;
    long long int arr[1005];

    scanf("%d %d", &n, &k);

    for (i = 0; i < n; i++) {
        scanf("%lld", &arr[i]);
    }

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (i = 0; i < k; i++) {
        sum += arr[i];
    }

    printf("%lld\n", sum);

    return 0;
}
