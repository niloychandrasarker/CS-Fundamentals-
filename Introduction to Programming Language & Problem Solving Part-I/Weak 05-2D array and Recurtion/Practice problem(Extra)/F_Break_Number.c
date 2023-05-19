#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int max = 0;
    for (int i = 0; i < N; i++) {
        long long num;
        scanf("%lld", &num);
        
        int div = 0;
        while (num % 2 == 0) {
            num /= 2;
            div++;
        }
        
        if (div > max)
            max = div;
    }
    
    printf("%d\n", max);
    
    return 0;
}
