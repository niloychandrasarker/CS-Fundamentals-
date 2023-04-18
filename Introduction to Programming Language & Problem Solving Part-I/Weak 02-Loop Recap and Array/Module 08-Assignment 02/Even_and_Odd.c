#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

      int n,sum_even=0,sum_odd=0;
      scanf("%d",&n);
      int ar[n];
      for (int i = 0; i < n; i++)
      {
            scanf("%d",&ar[i]);
      }
      for (int i = 0; i < n; i++)
      {
            if (ar[i]%2==0)
            {
                sum_even +=ar[i]; 
                
            }
            else
            {
                  sum_odd += ar[i];
            }
      }
      printf("%d %d",sum_even,sum_odd);
    return 0;
}
