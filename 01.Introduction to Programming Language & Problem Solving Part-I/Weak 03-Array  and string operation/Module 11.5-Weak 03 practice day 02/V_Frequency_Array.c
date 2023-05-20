#include <stdio.h>

int main() {
    int n, m, i, num;
    int freq[100001] = {0}; // Initialize frequency array with 0s
    
    scanf("%d %d", &n, &m); // Read input values n and m
    
    // Read n numbers and update frequency array
    for(i = 0; i < n; i++) {
        scanf("%d", &num);
        freq[num]++;
    }
    
    // Print frequency of each number from 1 to m
    for(i = 1; i <= m; i++) {
        printf("%d\n", freq[i]);
    }
    
    return 0;
}
