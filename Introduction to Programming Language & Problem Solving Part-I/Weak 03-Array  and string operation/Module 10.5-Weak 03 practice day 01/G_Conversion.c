#include <stdio.h>
#include <ctype.h>

int main() {
    char S[100005]; // Buffer for input string
    fgets(S, sizeof(S), stdin); // Input string

    // Iterate over each character in the string
    for (int i = 0; S[i] != '\0'; i++) {
        // Replace commas with spaces
        if (S[i] == ',') {
            S[i] = ' ';
        }
        // Swap case for upper and lower case characters
        else {
            if (isupper(S[i])) {
                S[i] = tolower(S[i]);
            } else if (islower(S[i])) {
                S[i] = toupper(S[i]);
            }
        }
    }

    printf("%s\n", S); // Print converted string

    return 0;
}
