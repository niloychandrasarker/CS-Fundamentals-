#include <stdio.h>

int countElements(int arr[], int n) {
    int count = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j && arr[i] + 1 == arr[j]) {
                count++;
                break;
            }
        }
    }

    return count;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result = countElements(arr, n);
    printf("%d\n", result);

    return 0;
}
