#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) 
    {
        int N;
        cin >> N;

        int s = 0;
        int a[N];

        for (int i = 0; i < N; i++) 
        {
            cin >> a[i];
            s += a[i];
        }

        if (s % 2 != 0) 
        {
            cout << "NO" << endl;
        } 
        else 
        {
            int sum = s / 2;
            bool dp[N + 1][sum + 1];

            for (int i = 0; i <= N; i++) 
            {
                dp[i][0] = true;
            }

            for (int i = 1; i <= sum; i++) 
            {
                dp[0][i] = false;
            }

            for (int i = 1; i <= N; i++) 
            {
                for (int j = 1; j <= sum; j++) 
                {
                    if (a[i - 1] <= j) 
                    {
                        dp[i][j] = dp[i - 1][j] || dp[i - 1][j - a[i - 1]];
                    } 
                    else 
                    {
                        dp[i][j] = dp[i - 1][j];
                    }
                }
            }

            if (dp[N][sum]) 
            {
                cout << "YES" << endl;
            } 
            else 
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
