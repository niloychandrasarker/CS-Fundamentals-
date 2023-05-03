#include <stdio.h>

void find_min_max(int A[], int N);

int main() {
    int N;
    int A[1000];
    scanf("%d", &N);
    for(int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    find_min_max(A, N);
    return 0;
}

void find_min_max(int A[], int N) {
    int min = A[0];
    int max = A[0];
    for(int i = 1; i < N; i++) {
        if(A[i] < min) {
            min = A[i];
        }
        if(A[i] > max) {
            max = A[i];
        }
    }
    printf("%d %d", min, max);
}
