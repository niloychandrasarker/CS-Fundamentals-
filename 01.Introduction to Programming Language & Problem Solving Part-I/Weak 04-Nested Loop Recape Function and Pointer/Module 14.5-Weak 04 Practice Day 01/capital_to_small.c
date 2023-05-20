#include<stdio.h>
//return type + Perimeter

char capital_to_small(char x) {
    if (x >= 'A' && x <= 'Z') {
        return x + 32;
    }
    else {
        return x;
    }
}
int main()
{
      char x;
      scanf("%c",&x);

      int value = capital_to_small(x);
      printf("%c",value);

      return 0;
}

