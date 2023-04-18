#include <stdio.h>

int main() {
    int N; // number of elements
    scanf("%d", &N);
    int A[N]; // array of numbers
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]); // read array elements
    }

    // iterate through the array and print values less than or equal to 10
    for (int i = 0; i < N; i++) {
        if (A[i] <= 10) {
            printf("A[%d] = %d\n", i, A[i]); // print the position and value in the desired format
        }
    }

    return 0;
}
