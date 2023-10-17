#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int T;
    cin >> T;

    while (T--) 
    {
        int N, W;
        cin >> N >> W;
        
        vector<int> w(N), v(N);
        
        for (int i = 0; i < N; i++) 
        {
            cin >> w[i];
        }
        
        for (int i = 0; i < N; i++) 
        {
            cin >> v[i];
        }

        vector<vector<int>> dp(N + 1, vector<int>(W + 1, 0));

        for (int i = 1; i <= N; i++) 
        {
            for (int j = 0; j <= W; j++) 
            {
                dp[i][j] = dp[i - 1][j];  

                if (w[i - 1] <= j) 
                {
                    dp[i][j] = max(dp[i][j], dp[i - 1][j - w[i - 1]] + v[i - 1]);
                }
            }
        }

        cout << dp[N][W] << endl;
    }

    return 0;
}
