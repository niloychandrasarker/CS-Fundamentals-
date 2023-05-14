#include <stdio.h>

int main() {
    int n, temp;
    scanf("%d", &n);
    int ages[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &ages[i]);
    }
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (ages[i] > ages[j]) {
                temp = ages[i];
                ages[i] = ages[j];
                ages[j] = temp;
            }
        }
    }
    if (n % 2 == 0) {
        printf("%d %d\n", ages[n/2-1], ages[n/2]);
    } else {
        printf("%d\n", ages[n/2]);
    }
    return 0;
}
