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
        int N;
        cin >> N;
        int A[N];

        for (int i = 0; i < N; i++) 
        {
            cin >> A[i];
        }

        map<int, int> mp;
        int maxCount = 0;
        int maxValue = A[0];

        for (int i = 0; i < N; i++) 
        {
            mp[A[i]]++;
            if (mp[A[i]] > maxCount || (mp[A[i]] == maxCount && A[i] > maxValue)) 
            {
                maxCount = mp[A[i]];
                maxValue = A[i];
            }
        }

        cout << maxValue << " " << maxCount << endl;
    }

    return 0;
}
