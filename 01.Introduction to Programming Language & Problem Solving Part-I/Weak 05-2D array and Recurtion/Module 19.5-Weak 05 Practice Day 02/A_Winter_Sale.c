#include <stdio.h>

int main() {
    int x, p;
    scanf("%d %d", &x, &p);

    double original_price = p * 100.0 / (100.0 - x);
    printf("%.2lf\n", original_price);

    return 0;
}
