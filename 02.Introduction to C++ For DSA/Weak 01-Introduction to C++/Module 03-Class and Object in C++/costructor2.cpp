#include<bits/stdc++.h>
using namespace std;
class Persion
{
     public:
      char name[100];
      int height;
      int age;
      
      Persion(int h,int a, char n[])//constructor
      {
            height=h;
            age=a;
            strcpy(name,n);
      }
      
};
int main()
{
  Persion niloy(9,20,"Niloy Sarker");
  
    cout << niloy.name<<endl;
    cout << niloy.height<<" feet"<<endl;
    cout << niloy.age<<endl;
    
    return 0;
}