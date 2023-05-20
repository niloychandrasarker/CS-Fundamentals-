#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    // Print the pattern
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == (N - 1) / 2 || j == (N - 1) / 2)
                printf("#");
            else
                printf("*");
        }
        printf("\n");
    }

    return 0;
}
