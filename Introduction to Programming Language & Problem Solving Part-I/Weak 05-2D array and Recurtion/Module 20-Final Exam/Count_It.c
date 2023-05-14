#include <stdio.h>

int main() {
    char str[1000];
    fgets(str, 1000, stdin);

    int small = 0, capital = 0, spaces = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            small++;
        else if (str[i] >= 'A' && str[i] <= 'Z')
            capital++;
        else if (str[i] == ' ')
            spaces++;
    }

    printf("Capital - %d\n", capital);
    printf("Small - %d\n", small);
    printf("Spaces - %d\n", spaces);

    return 0;
}
