/*
তোমাকে দুইটি ইন্টিজার ভ্যেলু ইনপুট নিতে হবে এবং তাদের যোগফল, বিয়োগফল, গুণফল এবং ভাগফল নীচে দেখানো ফরম্যাট এ দেখাতে হবে।

For example:
Inputs are 5 and 2
Then you’ll give output as:
5 + 2 = 7
5 - 2 = 3
5 * 2 = 10
5 / 2 = 2.50

Sample Input
Sample Output
5 2 
5 + 2 = 7
5 - 2 = 3
5 * 2 = 10
5 / 2 = 2.50

10 3
10 + 3 = 13
10 - 3 = 7
10 * 3 = 30
10 / 3 = 3.33

*/
#include <stdio.h>

int main() {
    int a,b,sum,mul,sub;
    float div;
    printf("Enter any 2 number :: ");
    scanf("%d %d",&a,&b);
  sum=a+b;
  sub=a-b;
  mul=a*b;
  div=(float)a/b;
   printf("%d + %d = %d\n",a,b,sum);
   printf("%d - %d = %d\n",a,b,sub);
   printf("%d * %d = %d\n",a,b,mul);
   printf("%d / %d = %0.2f\n",a,b,div);
   return 0;
}