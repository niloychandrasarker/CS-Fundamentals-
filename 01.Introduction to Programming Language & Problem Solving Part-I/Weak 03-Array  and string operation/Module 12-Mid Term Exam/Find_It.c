#include <stdio.h>

int main() {
    int n, x;
    scanf("%d", &n); 
    int ar[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &ar[i]); 
    }
    scanf("%d", &x); 
    int count = 0; 
    for (int i = 0; i < n; i++) {
        if (ar[i] == x) {
            count++; 
        }
    }

    printf("%d\n", count); 
    return 0;
}
