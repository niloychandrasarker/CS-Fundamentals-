#include <stdio.h>

long long int summation(int n, long long int arr[]) {
    if (n == 0) { // base case
        return 0;
    } else {
        return arr[n-1] + summation(n-1, arr); // recursive call
    }
}

int main() {
    int n;
    scanf("%d", &n);
    long long int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%lld", &arr[i]);
    }
    long long int result = summation(n, arr);
    printf("%lld\n", result);
    return 0;
}
