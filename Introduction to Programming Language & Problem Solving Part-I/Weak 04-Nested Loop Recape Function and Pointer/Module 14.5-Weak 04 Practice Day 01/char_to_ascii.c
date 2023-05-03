#include<stdio.h>
//return type + Perimeter
int char_to_ascii(char x)
{
    return (int)x; 
}
int main()
{
      char x;
      scanf("%c",&x);

      int value = char_to_ascii(x);
      printf("%d",value);

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
void char_to_ascii()
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