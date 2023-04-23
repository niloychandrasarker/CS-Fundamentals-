#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    char S[1005]; // Buffer for input string
    fgets(S, sizeof(S), stdin); // Input string
    S[strcspn(S, "\n")] = '\0'; // Remove newline character from input

    int len = strlen(S);
    bool isPalindrome = true;

    // Check if each pair of characters are equal
    for (int i = 0; i < len / 2; i++) {
        if (S[i] != S[len - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
