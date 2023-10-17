#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T; 

    while (T--) 
    {
        int N, M;
        cin >> N >> M; 

        vector<int> marks(N);
        for (int i = 0; i < N; i++) 
        {
            cin >> marks[i];
        }

        vector<bool> dp(1001, false); 

        dp[0] = true; 

       
        for (int i = 0; i < N; i++) 
        {
            for (int j = marks[i]; j <= 1000; j++) 
            {
                if (dp[j - marks[i]]) 
                {
                    dp[j] = true;
                }
            }
        }

        if (dp[1000 - M]) 
        {
            cout << "YES" << endl;
        } 
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
