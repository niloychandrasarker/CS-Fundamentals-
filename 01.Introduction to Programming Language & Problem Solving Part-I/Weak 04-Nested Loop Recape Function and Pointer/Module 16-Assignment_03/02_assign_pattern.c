#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    if (N < 1 || N > 9) {
        printf("Error\n");
        return 0;
    }

    for (int i = 1; i <= N; i++) {
        // Print spaces
        for (int j = 1; j <= N-i; j++) {
            printf(" ");
        }
        // Print number
        for (int j = 1; j <= i; j++) {
            printf("%d",i);
        }
        printf("\n");
    }

    
    return 0;
}
