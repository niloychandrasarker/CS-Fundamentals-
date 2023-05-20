#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        unsigned int S, A, B, C;
        scanf("%u%u%u%u", &S, &A, &B, &C);

        unsigned int D = S - A - B - C;  // calculate the missing number
        printf("%u\n", D);
    }   
    return 0;
}
