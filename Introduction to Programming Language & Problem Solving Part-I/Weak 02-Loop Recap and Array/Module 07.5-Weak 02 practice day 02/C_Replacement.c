#include <stdio.h>

int main() {
    int N; // number of elements
    scanf("%d", &N);
    int A[N]; // array of numbers
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]); // read array elements
    }

    for (int i = 0; i < N; i++) {
        if (A[i] < 0) {
            A[i] = 2; // set value to 2 if negative
        } else if (A[i] > 0) {
            A[i] = 1; // set value to 1 if positive
        }
    }

    for (int i = 0; i < N; i++) {
        printf("%d ", A[i]); // print the updated array
    }

    return 0;
}
