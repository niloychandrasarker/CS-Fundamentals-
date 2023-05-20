#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); // Input number of elements
    int A[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]); // Input array elements
    }

    // Find minimum and maximum numbers
    int min = A[0];
    int max = A[0];
    int min_index = 0;
    int max_index = 0;
    for (int i = 1; i < N; i++) {
        if (A[i] < min) {
            min = A[i];
            min_index = i;
        }
        if (A[i] > max) {
            max = A[i];
            max_index = i;
        }
    }

    // Swap minimum and maximum numbers
    int temp = A[min_index];
    A[min_index] = A[max_index];
    A[max_index] = temp;

    // Print the array after replacement operation
    for (int i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }

    return 0;
}
