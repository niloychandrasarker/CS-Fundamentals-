#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);  // number of test cases

    while (t--) {
        char s[11];
        scanf("%s", s);
        char target[] = "codeforces";
        int diff = 0;

        for (int i = 0; i < strlen(s); i++) {
            if (s[i] != target[i]) {
                diff++;
            }
            if (diff > strlen(target) - strlen(s) + i + 1) {
                break;
            }
        }

        printf("%d\n", diff);
    }

    return 0;
}