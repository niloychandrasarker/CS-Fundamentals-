#include<stdio.h>
void world()
{
      printf("start world\n");
      printf("end world\n");
     
}
void hello()
{
      printf("start hello\n");
      world();
      printf("end hello\n");
      
     
}
int main()
{
      printf("start main\n");
      hello();
      printf("end main\n");

      return 0;
}