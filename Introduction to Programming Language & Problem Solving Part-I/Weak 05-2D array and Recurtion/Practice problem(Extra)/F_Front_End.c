#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int front = 0;
    int end = n - 1;
    
    while (front <= end) {
        printf("%d ", arr[front]);
        front++;
        
        if (front <= end) {
            printf("%d ", arr[end]);
            end--;
        }
    }
    
    return 0;
}
