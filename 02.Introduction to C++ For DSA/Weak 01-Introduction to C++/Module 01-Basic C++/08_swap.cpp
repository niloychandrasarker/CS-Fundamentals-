#include<iostream>
#include<utility>
using namespace std;

// int my_swap(int *a ,int *b )
// {
//       int temp = *a;
//       *a = *b;
//       *b = temp;
      
// }


      
int main()
{
    int a,b;
    cin>>a>>b;
    swap(a,b);
    
    cout<< a <<" "<< b <<endl;
    
 
    
    return 0;
}