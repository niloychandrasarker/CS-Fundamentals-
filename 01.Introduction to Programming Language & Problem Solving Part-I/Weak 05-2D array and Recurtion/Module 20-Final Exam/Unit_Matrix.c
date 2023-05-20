#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int is_unit_matrix = 1;  // assume the matrix is a unit matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int x;
            scanf("%d", &x);

            if (i == j && x != 1) {  // primary diagonal element must be 1
                is_unit_matrix = 0;
            } else if (i != j && x != 0) {  // non-diagonal element must be 0
                is_unit_matrix = 0;
            }
        }
    }

    if (is_unit_matrix) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}
