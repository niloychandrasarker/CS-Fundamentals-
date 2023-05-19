#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int n;
        scanf("%d", &n);
        
        int evenCount = 0;
        int oddCount = 0;
        
        for (int i = 0; i < n; i++) {
            int num;
            scanf("%d", &num);
            
            if (num % 2 == 0)
                evenCount++;
            else
                oddCount++;
        }
        
        if (evenCount == oddCount) {
            printf("0\n");
        } else if (evenCount > 0 && oddCount > 0) {
            printf("2\n");
        } else {
            printf("-1\n");
        }
    }
    
    return 0;
}
