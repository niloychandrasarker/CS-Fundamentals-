#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char word[101];
    int upper_count = 0, lower_count = 0;

    scanf("%s", word);

    for (int i = 0; i < strlen(word); i++) {
        if (isupper(word[i])) {
            upper_count++;
        } else {
            lower_count++;
        }
    }

    if (upper_count > lower_count) {
        for (int i = 0; i < strlen(word); i++) {
            printf("%c", toupper(word[i]));
        }
    } else {
        for (int i = 0; i < strlen(word); i++) {
            printf("%c", tolower(word[i]));
        }
    }

    return 0;
}