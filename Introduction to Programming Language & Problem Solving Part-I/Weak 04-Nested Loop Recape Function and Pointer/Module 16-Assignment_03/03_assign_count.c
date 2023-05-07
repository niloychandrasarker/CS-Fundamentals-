#include <stdio.h>

int count_before_zero(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == 0) {
            break;
        }
        count++;
    }
    return count;
}

int main() {
    //size of the array
    int size;
    scanf("%d",&size);

    //elements of the array
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int count = count_before_zero(arr, size);
    printf("%d\n", count);

    return 0;
}
