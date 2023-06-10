#include<bits/stdc++.h>
using namespace std;
class person
{
  public :
      string name;
      int age;
      int mark1;
      int mark2;
      person(string nm,int ag)
      {
            name=nm;
            age=ag;
           
      }
     
};
int main()
{
      person* niloy=new person("Niloy sarker",21);
      person* omrit=new person("omrit sarker",20);
      // niloy->name=omrit->name;
      // niloy->age=omrit->age;
      *niloy=*omrit;
      delete omrit;
      cout<<niloy->name<<" "<<niloy->age<<endl;
    
    return 0;
}