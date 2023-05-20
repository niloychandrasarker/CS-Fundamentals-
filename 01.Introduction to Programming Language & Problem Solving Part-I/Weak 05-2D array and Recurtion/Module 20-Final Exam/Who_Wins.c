#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int tigerWins = 0, pathanWins = 0;
    for (int i = 0; i < n; i++) {
        int x1, x2;
        scanf("%d %d", &x1, &x2);
        if (x1 > x2) {
            tigerWins++;
        } else if (x2 > x1) {
            pathanWins++;
        }
    }
    if (tigerWins > pathanWins) {
        printf("Tiger\n");
    } else if (pathanWins > tigerWins) {
        printf("Pathan\n");
    } else {
        printf("Draw\n");
    }
    return 0;
}
