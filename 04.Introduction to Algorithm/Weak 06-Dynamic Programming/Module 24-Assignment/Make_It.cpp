#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) 
    {
        int N;
        cin >> N;

       
        int steps = 0;

  
        while (N > 1) 
        {
            if (N % 2 == 0) 
            {
                N /= 2;
            } 
            else 
            {
                N -= 3;
            }
            steps++;
        }


        if (N == 1) 
        {
            cout << "YES" << endl;
        } 
        else 
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
