#include <stdio.h>

int main() {
    char input[1001]; // Input string
    int counts[26] = {0}; // Array to store counts of each alphabet
    int i;

    scanf("%s", input);

    // Loop through the input string
    for (i = 0; input[i] != '\0'; i++) {
        if (input[i] >= 'a' && input[i] <= 'z') {
            // Increment the count of the alphabet
            counts[input[i] - 'a']++;
        }
    }

    // Print the counts of each alphabet
    for (i = 0; i < 26; i++) {
        printf("%c - %d\n", 'a' + i, counts[i]);
    }

    return 0;
}
