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
        int math_mark;
        int eng_mark;
    };
int main()
{
    int n;
    cin>>n;
    student ar[n];
    for (int i = 0; i <n; i++)
    {    
      cin>>ar[i].name>>ar[i].cls>>ar[i].s>>ar[i].math_mark>>ar[i].eng_mark;
    }
    for (int i = n-1; i >= 0; i--)
    {
      cout<<ar[i].name<<" "<<ar[i].cls<<" "<<ar[i].s<<" "<<ar[i].math_mark<<" "<<ar[i].eng_mark<<endl;
    }
    return 0;
}
