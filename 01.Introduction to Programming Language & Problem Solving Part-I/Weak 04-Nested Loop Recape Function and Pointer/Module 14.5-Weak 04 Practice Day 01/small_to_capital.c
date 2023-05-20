#include<stdio.h>
//return type + Perimeter

char small_to_capital(char x) {
    if (x >= 'a' && x <= 'z') {
        return x - 32;
    }
    else {
        return x;
    }
}
int main()
{
      char x;
      scanf("%c",&x);

      int value = small_to_capital(x);
      printf("%c",value);

      return 0;
}


//return type + No Perimeter
// int char_to_ascii()
// {
//       char x;
//       scanf("%c",&x);
 
//     return (int)x; 
// }
// int main()
// {
     
    
//       printf("%d",char_to_ascii());
//  return 0;
// }


// // No return type + Perimeter
// void char_to_ascii(char x)
// {
//     printf("%d",x);
//     return; 
// }
// int main()
// {
     
//       char x;
//       scanf("%c",&x);
//       char_to_ascii(x);
      
//  return 0;
// }

// No return type + No Perimeter
//void char_to_ascii()
// {
//        char x;
//       scanf("%c",&x);
//     printf("%d\n",x);
//     return; 
// }
// int main()
// {
//       char_to_ascii();
//       return 0;
// }