//problem name :: Variables  

/*Problem Statement

You've learned about variables, right? Now its time to practice them. You need to take an integer A, a very big integer B, a floating value C and a character D as input and output them serially.

Input Format

First line will contain A
Second line will contain B
Third line will contain C
Fourth line will contain D
Constraints

-10^9 <= A <= 10^9
-10^18 <= B <= 10^18
-10^9 <= C <= 10^9
Output Format

Output them serially and put a new line after each value. Output the floating value 2 points after decimal.
Sample Input 0

100
1234567891234567
23.5675
A
Sample Output 0

100
1234567891234567
23.57
A*/

#include <stdio.h>

int main() {
    int A;
    long long int B;
    float C;
    char D;

    // Take input values
    scanf("%d", &A);
    scanf("%lld", &B);
    scanf("%f", &C);
    scanf(" %c", &D); // note the space before %c to ignore newline character

    // Output values serially with 2 decimal places for C
    printf("%d\n", A);
    printf("%lld\n", B);
    printf("%.2f\n", C);
    printf("%c\n", D);

    return 0;
}
