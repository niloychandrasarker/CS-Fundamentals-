/*
||-------------------------------------------||
||            Niloy Chandra Sarker           ||
|| Dept. of Computer science and Engineering ||
||   Faculty of engineering and technology   ||
||            University of Dhaka            ||
||-------------------------------------------||
*/
#include<bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
    Student(string name, int roll, int marks)
    {
        this->marks = marks;
        this->roll = roll;
        this->name = name;
    }
};
class cmp 
{
public:
    bool operator()(Student a, Student b) 
    {
        if (a.marks != b.marks) 
        {
            return a.marks < b.marks;
        }
        return a.roll > b.roll;
    }
};
int main() 
{
    int N;
    cin >> N;
    priority_queue<Student, vector<Student>, cmp> pq;

    for (int i = 0; i < N; i++) 
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        Student obj(name, roll, marks);
        pq.push(obj);
    }

    int Q;
    cin >> Q;

    while (Q--) 
    {
        int cmd;
        cin >> cmd;

        if (cmd == 0) 
        {
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;
            Student obj(name, roll, marks);
            pq.push(obj); 

            cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
        }
        else if (cmd == 1) 
        {
            if (pq.empty()) 
            {
                cout << "Empty" << endl;
            } 
            else 
            {
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
            }
        } 
        else if (cmd == 2) 
        {
            if (pq.empty()) 
            {
                cout << "Empty" << endl;
            }
            else 
            {
                pq.pop(); 
                if (pq.empty()) 
                {
                    cout << "Empty" << endl;
                } 
                else 
                {
                    cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
                }
            }
        }
    }

    return 0;
}
