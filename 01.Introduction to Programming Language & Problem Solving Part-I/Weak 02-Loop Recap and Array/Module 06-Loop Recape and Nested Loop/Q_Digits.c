//codeforces problem :: Q. Digits
#include <stdio.h>

int main() {
    int test,i;
    scanf("%d",&test);
    for ( i = 1; i <=test ; i++)
    {
      int n;
      scanf("%d",&n);
      do
      {
            printf("%d ",n%10);
            n=n/10;
      }
      while (n!=0);
      printf("\n");
      
    }
    return 0;
}
