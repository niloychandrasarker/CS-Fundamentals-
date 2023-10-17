#include <bits/stdc++.h>
using namespace std;

int main() 
{
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

        vector<int> dp(1001, INT_MAX); 

        dp[0] = 0; 

       
        for (int i = 0; i < N; i++) 
        {
            for (int j = marks[i]; j <= 1000; j++) 
            {
                if (dp[j - marks[i]] != INT_MAX) 
                {
                    dp[j] = min(dp[j], dp[j - marks[i]] + 1);
                }
            }
        }


        if (dp[1000 - M] != INT_MAX) 
        {
            cout << dp[1000 - M] << endl;
        } 
        else 
        {
            cout << -1 << endl;
        }
    }

    return 0;
}
