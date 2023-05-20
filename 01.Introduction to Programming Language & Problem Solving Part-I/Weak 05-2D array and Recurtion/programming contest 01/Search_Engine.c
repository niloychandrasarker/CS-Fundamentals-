#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++) {
        int n, s;
        scanf("%d", &n);
        int arr[n];
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[j]);
        }
        scanf("%d", &s);
        int pos = -1;
        for (int j = 0; j < n; j++) {
            if (arr[j] == s) {
                pos = j+1;
                break;
            }
        }
        if (pos == -1) {
            printf("Case %d: Not Found\n", i);
        } else {
            printf("Case %d: %d\n", i, pos);
        }
    }
    return 0;
}