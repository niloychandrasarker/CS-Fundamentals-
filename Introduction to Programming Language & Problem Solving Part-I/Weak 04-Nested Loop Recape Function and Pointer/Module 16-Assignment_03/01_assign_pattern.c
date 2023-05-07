#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    if (N < 1 || N > 5) {
        printf("Error: N should be between 1 and 5.\n");
        return 0;
    }

    // Print the upper half of the pattern
    for (int i = 1; i <= N; i++) {
        // Print spaces
        for (int j = 1; j <= N-i; j++) {
            printf(" ");
        }
        // Print number
        for (int j = 1; j <= 2*i-1; j++) {
            printf("%d",j);
        }
        printf("\n");
    }

    // Print the lower half of the pattern
    for (int i = N-1; i >= 1; i--) {
        // Print spaces
        for (int j = 1; j <= N-i; j++) {
            printf(" ");
        }
        // Print number
        for (int j = 1; j <= 2*i-1; j++) {
            printf("%d",j);
        }
        printf("\n");
    }

    return 0;
}
