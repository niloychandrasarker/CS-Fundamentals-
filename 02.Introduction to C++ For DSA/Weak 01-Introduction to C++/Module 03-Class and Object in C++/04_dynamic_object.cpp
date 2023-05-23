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
int main()
{
    Student* niloy = new Student(12,'A',176,"Niloy Sarker");
     Student* omrit = new Student(11,'B',172,"omrit Sarker");

   
//     cout <<(*niloy).name<<endl;
//     cout << (*niloy).cls<<endl;
//     cout << (*niloy).sec<<endl;
//     cout << (*niloy).id<<endl;

//     cout<< (*omrit).name<<endl;
//     cout <<(*omrit).cls<<endl;
//     cout <<(*omrit).sec<<endl;
//     cout <<(*omrit).id<<endl;

    //shortcut way
    //arrow sign
    //(*niloy) = niloy->

    cout << niloy->name<<endl;
    cout << niloy->cls<<endl;
    cout << niloy->sec<<endl;
    cout << niloy->id<<endl;

    cout <<omrit->name<<endl;
    cout <<omrit->cls<<endl;
    cout <<omrit->sec<<endl;
    cout <<omrit->id<<endl;

    return 0;
}