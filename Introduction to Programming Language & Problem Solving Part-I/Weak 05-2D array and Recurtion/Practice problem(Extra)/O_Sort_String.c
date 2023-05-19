#include <stdio.h>

void swap(char* a, char* b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(char arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    
    char arr[n];
    scanf("%s", arr);
    
    bubbleSort(arr, n);
    
    printf("%s\n", arr);
    
    return 0;
}
