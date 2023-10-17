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

        int target = 1000 - M;

        vector<vector<bool>> dp(N + 1, vector<bool>(target + 1, false));
        dp[0][0] = true;

        for (int i = 1; i <= N; i++) {
            for (int j = 0; j <= target; j++) 
            {
                if (marks[i - 1] <= j) 
                {
                    dp[i][j] = dp[i - 1][j] || dp[i - 1][j - marks[i - 1]];
                } 
                else 
                {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }

        if (dp[N][target]) 
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
