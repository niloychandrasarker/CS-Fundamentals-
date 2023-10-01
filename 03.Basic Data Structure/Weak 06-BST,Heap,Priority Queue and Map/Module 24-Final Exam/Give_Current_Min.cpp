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
int main() 
{
    int N;
    cin >> N;

    priority_queue<int, vector<int>, greater<int>> min_Hp; 

    for (int i = 0; i < N; ++i) 
    {
        int val;
        cin >> val;
        min_Hp.push(val);
    }
    int Q;
    cin >> Q;

    while (Q--) 
    {
        int cmd;
        cin >> cmd;

        if (cmd == 0) 
        {
            int X;
            cin >> X;
            min_Hp.push(X); 
            cout << min_Hp.top() << endl; 
        } 
        else if (cmd == 1) 
        {
            if (min_Hp.empty()) 
            {
                cout << "Empty" << endl;
            } 
            else 
            {
                cout << min_Hp.top() << endl; 
            }
        } 
        else if (cmd == 2) 
        {
            if (min_Hp.empty()) 
            {
                cout << "Empty" << endl;
            } 
            else 
            {
                min_Hp.pop(); 
                if (min_Hp.empty()) 
                {
                    cout << "Empty" << endl;
                } 
                else 
                {
                    cout << min_Hp.top() << endl; 
                }
            }
        }
    }
return 0;
}
