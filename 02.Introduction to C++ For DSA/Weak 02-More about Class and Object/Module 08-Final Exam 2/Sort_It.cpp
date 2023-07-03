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
    int math_marks;
    int eng_marks;
};

bool compareByMark(student a1, student b1) 
{
    if ((a1.math_marks + a1.eng_marks) > (b1.math_marks + b1.eng_marks)) 
    {
        return true;
    } 
    else if ((a1.math_marks + a1.eng_marks) == (b1.math_marks + b1.eng_marks)) 
    {
        return a1.id < b1.id;
    } 
    else 
    {
        return false;
    }
}

int main() 
{
    int n;
    cin >> n;
    student ar[n];

    for (int i = 0; i < n; i++) 
    {
        cin >> ar[i].name >> ar[i].cls >> ar[i].s >> ar[i].id >> ar[i].math_marks >> ar[i].eng_marks;
    }

    sort(ar, ar+n, compareByMark);

    for (int i = 0; i < n; i++) 
    {
        cout<<ar[i].name << " ";
        cout<<ar[i].cls << " ";
        cout<<ar[i].s << " ";
        cout<<ar[i].id << " ";
        cout<<ar[i].math_marks << " ";
        cout<<ar[i].eng_marks<< " "<<endl;
    }

    return 0;
}
