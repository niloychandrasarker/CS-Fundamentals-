#include <stdio.h>

int main() {
    int N; // number of elements
    scanf("%d", &N);
    int A[N]; // array of numbers
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]); // read array elements
    }

    int lowest = A[0]; // initialize lowest number with first element
    int position = 1; // initialize position with 1

    // iterate through the array and find the lowest number and its position
    for (int i = 1; i < N; i++) {
        if (A[i] < lowest) {
            lowest = A[i]; // update lowest number
            position = i + 1; // update position (1-indexed)
        }
    }

    printf("%d %d\n", lowest, position); // print the lowest number and its position

    return 0;
}

