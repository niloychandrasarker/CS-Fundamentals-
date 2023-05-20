#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

     int M1, M2, D;
    scanf("%d %d %d", &M1, &M2, &D);

    int days = (M1 * D) /M2;
    printf("%d\n", days);
    
    return 0;
}
