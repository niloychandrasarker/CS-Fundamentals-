#include <stdio.h>

void printEvenIndices(int A[], int n, int i) {
    if (i >= n) {
        return;
    }
    printEvenIndices(A, n, i + 2);
    printf("%d ", A[i]);
}

int main() {
    int n, A[1005], i;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    printEvenIndices(A, n, 0);
    return 0;
}
