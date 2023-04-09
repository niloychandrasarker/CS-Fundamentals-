//codeforces problem :: C. Even, Odd, Positive and Negative
#include <stdio.h>

int main() {
    int n, num, even = 0, odd = 0, positive = 0, negative = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        if (num % 2 == 0) 
        {
            even++;
        } 
        else
        {
            odd++;
        }
        if (num > 0)
        {
            positive++;
        } 
        else if (num < 0) 
        {
            negative++;
        }
    }
    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", positive);
    printf("Negative: %d\n", negative);
    return 0;
}
