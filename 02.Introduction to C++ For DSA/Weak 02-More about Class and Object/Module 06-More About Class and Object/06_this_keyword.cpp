#include<bits/stdc++.h>
using namespace std;
class person
{
  public :
      string name;
      int age;
      int mark1;
      int mark2;
      person(string name,int age,int mark1,int mark2)
      {
            this->name=name;
            this->age=age;
            this->mark1=mark1;
            this->mark2=mark2;
      }
      void hello()
      {
            cout<<name << " " <<age <<endl;
      }
      int mark_sum()
      {
            int sum=mark1+mark2;
            return sum;
      }
};
int main()
{
      person niloy("Niloy sarker",21,90,80);
     
      cout<< niloy.name ;
    
    return 0;
}