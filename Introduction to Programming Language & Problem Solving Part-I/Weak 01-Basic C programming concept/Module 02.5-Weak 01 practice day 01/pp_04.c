/*

You need to take one integer value as input and tell if the value is positive or negative or zero.
See the sample input and output for more clarification.



Sample Input
Sample Output
10
positive
-50
negative
0
zero



*/
#include <stdio.h> 
  
int main() 
{ 
    int A; 
  
    printf("Enter the number A: "); 
    scanf("%d", &A); 
  
    if (A > 0) 
        printf("positive."); 
    else if (A < 0) 
        printf("negative"); 
    else
        printf("zero"); 
  
    return 0; 
} 