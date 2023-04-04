/*You need to take one non-negative integer (0 or greater than 0) value as input and tell if it is even or odd.
See the sample input and output for more clarification.

Sample Input
Sample Output
10
even
3
odd

*/
#include <stdio.h>

int main() {
    int num;
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("even");
    } else {
        printf("odd");
    }

    return 0;
}
