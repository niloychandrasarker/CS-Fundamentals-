#include <stdio.h>

int main() {
    int n, marks[100], i, highest = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
        if (marks[i] > highest) {
            highest = marks[i];
        }
    }
    for (i = 0; i < n; i++) {
        printf("%d ", highest - marks[i]);
    }
    printf("\n");
    return 0;
}