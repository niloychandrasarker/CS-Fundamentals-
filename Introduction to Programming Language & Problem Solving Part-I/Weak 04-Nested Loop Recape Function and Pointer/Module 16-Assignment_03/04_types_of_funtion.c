// //Has return + No perametr

// #include<stdio.h>
// int add(int a, int b)
// {
//     int sum = a+b;
//     return sum ;
// }
// int main()
// {
//       int a,b;
//       scanf("%d %d",&a,&b);
//       int result = add(a,b);
//       printf("%d",result);
//       return 0;
// }

// //Has return + no perametr

// #include <stdio.h>
// int calculate_sum() {
//     int n;
//     int sum = 0;
//     scanf("%d",&n);
//     for (int i = 1; i <= n; i++) {
//         sum += i;
//     }
//     return sum;
// }
// int main()
// {
      
//       int result = calculate_sum();
//       printf("%d",result);
//       return 0;
// }

// // No return + perametr

// #include <stdio.h>
// void print_factorial(int n) {
//     int factorial = 1;
//     for (int i = 1; i <= n; i++) {
//         factorial *= i;
//     }
//     printf("Factorial of %d is %d\n", n, factorial);
// }
// int main()
// {
      
//       print_factorial(5); 
//       return 0;
// }


// No return + perametr

#include <stdio.h>
void swap_numbers() {
    int a,b;
    scanf("%d %d",&a,&b);
    int temp = a;
    a = b;
    b = temp;
    printf("%d %d", a, b);
}
int main()
{
      
      swap_numbers(); 
      return 0;
}