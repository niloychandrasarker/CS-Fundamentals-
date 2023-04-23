#include <stdio.h>
#include <string.h>

int main() {
    char A[11], B[11];
    scanf("%s", A);
    scanf("%s", B);

    int sizeA = strlen(A);
    int sizeB = strlen(B);

    printf("%d %d\n", sizeA, sizeB);
    printf("%s%s\n", A, B);

    char temp = A[0];
    A[0] = B[0];
    B[0] = temp;

    printf("%s %s\n", A, B);

    return 0;
}
