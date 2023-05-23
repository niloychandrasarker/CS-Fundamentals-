#include<bits/stdc++.h>
using namespace std;
class Student
{
     public:
      char name[100];
      int cls;
      char sec;
      int id;
      
      Student(int c,char s,int i, char n[])
      {
            cls=c;
            sec=s;
            id=i;
            strcpy(name,n);
      }
      
};
Student fun()
{
      char name[100]="Niloy sarker";
      Student n(12,'A',176,name);
       Student o(11,'B',172,"omrit Sarker");
      return n,o;
}
int main()
{
    Student niloy=fun();
    Student omrit=fun();


   
    cout << niloy.name<<endl;
    cout << niloy.cls<<endl;
    cout << niloy.sec<<endl;
    cout << niloy.id<<endl;

    cout<< omrit.name<<endl;
    cout << omrit.cls<<endl;
    cout << omrit.sec<<endl;
    cout << omrit.id<<endl;

    return 0;
}