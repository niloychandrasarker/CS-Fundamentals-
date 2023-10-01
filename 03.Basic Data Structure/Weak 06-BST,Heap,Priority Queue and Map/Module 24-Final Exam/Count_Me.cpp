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
    int T;
    cin >> T;
    cin.ignore(); 
    while (T--) 
    {
        string S;
        getline(cin, S);
        string word;
        stringstream ss(S); 
        map<string, int> mp;
        int maxCount = 0;
        string firstWord;

        while (ss >> word) 
        {
            mp[word]++;
            if (mp[word] > maxCount) 
            {
                maxCount = mp[word];
                firstWord = word;
            }
        }

        cout << firstWord << " " << maxCount << endl;
    }

    return 0;
}
