#include <stdio.h>

int main() {
    char S[1001];
    scanf("%s", S); // Input the string

    int capitals = 0, smalls = 0;
    for (int i = 0; S[i] != '\0'; i++) {
        if (S[i] >= 'A' && S[i] <= 'Z') {
            capitals++;
        } else if (S[i] >= 'a' && S[i] <= 'z') {
            smalls++;
        }
    }

    printf("%d %d\n", capitals, smalls);

    return 0;
}
