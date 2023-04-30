#include <stdio.h>

int main() {
    int length;
    scanf("%d", &length);
    getchar(); // consume newline character

    char input[1000001]; // assuming maximum input length is 10^6 digits, so taking a larger buffer
    fgets(input, 1000001, stdin); // read input characters one by one

    int sum = 0;
    for (int i = 0; i < length; i++) {
        if (input[i] >= '0' && input[i] <= '9') 
        {
            sum += input[i] - '0';
        }
        
    }

    printf("%d\n", sum);

    return 0;
}
