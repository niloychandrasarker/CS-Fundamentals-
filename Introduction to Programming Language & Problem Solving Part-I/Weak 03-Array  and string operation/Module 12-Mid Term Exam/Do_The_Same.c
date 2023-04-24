#include <stdio.h>

int main() {
    int N, K;
    scanf("%d %d", &N, &K); // Input N and K

    for (int i = 0; i < K; i++) { // Loop K times
        for (int j = 1; j <= N; j++) { // Print numbers from 1 to N
            printf("%d ", j);
        }
        printf("\n"); // Print new line after each iteration
    }

    return 0;
}
