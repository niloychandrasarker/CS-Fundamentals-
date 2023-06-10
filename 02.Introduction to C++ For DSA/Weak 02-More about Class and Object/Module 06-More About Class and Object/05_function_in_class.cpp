#include<bits/stdc++.h>
using namespace std;
class person
{
  public :
      string name;
      int age;
      int mark1;
      int mark2;
      person(string nm,int ag,int m1,int m2)
      {
            name=nm;
            age=ag;
            mark1=m1;
            mark2=m2;
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
     
      cout<< niloy.mark_sum()<<endl;
    
    return 0;
}