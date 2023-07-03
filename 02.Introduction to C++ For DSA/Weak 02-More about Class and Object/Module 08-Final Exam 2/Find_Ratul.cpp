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

int main()
{
    string str;
    getline(cin,str);
    stringstream ss(str);
    string word;
    bool flag = false;

    while (ss >> word) {
        if (word == "Ratul") {
            flag = true;
            break;
        }
    }
    if(flag==true)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}

