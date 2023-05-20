#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T); // Input number of test cases

    char S[105]; // Buffer for input string

    for (int i = 0; i < T; i++) {
        scanf("%s", S); // Input string

        int len = strlen(S); // Length of the string

        // If the string is too long, apply abbreviation
        if (len > 10) {
            printf("%c%d%c\n", S[0], len - 2, S[len - 1]); // Print abbreviation
        } else {
            printf("%s\n", S); // Print original string
        }
    }

    return 0;
}
