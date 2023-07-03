/*
||-------------------------------------------||
||            Niloy Chandra Sarker           ||
|| Dept. of Computer science and Engineering ||
||   Faculty of engineering and technology   ||
||            University of Dhaka            ||
||-------------------------------------------||
*/
#include <bits/stdc++.h>
using namespace std;
class student
{
      public:
      string name;
      int cls;
      char s;
      int id;

};
int main()
{

      int n;
      cin>>n;
      student ar[n];
      for (int i = 0; i < n; i++)
      {
      cin>>ar[i].name>>ar[i].cls>>ar[i].s>>ar[i].id;
      }

      for (int i = 0; i < n/2; i++)
      {
        swap(ar[i].id,ar[n-i-1].id);
      }
      for (int i = 0; i < n; i++)
      {
        cout<<ar[i].name<<" "<<ar[i].cls<<" "<<ar[i].s<<" "<<ar[i].id<<endl;
      }
    return 0;
}
