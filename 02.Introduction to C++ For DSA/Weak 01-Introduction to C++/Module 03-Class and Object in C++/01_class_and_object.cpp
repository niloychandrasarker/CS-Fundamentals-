#include<bits/stdc++.h>
using namespace std;
class Student
{
     public:
      char name[100];
      int cls;
      char sec;
      int id;
      
};
int main()
{
    Student niloy;
    niloy.cls=12;
    niloy.sec='A';
    niloy.id=176;
    char nm1[100]="Niloy Sarker";
    strcpy(niloy.name,nm1);

    Student omrit;
    omrit.cls=11;
    omrit.sec='A';
    omrit.id=176;
    char nm2[100]="Omrit sarker";
    strcpy(omrit.name,nm2);

    cout << niloy.name;

    return 0;
}