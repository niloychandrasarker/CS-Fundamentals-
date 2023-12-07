#include <bits/stdc++.h>
using namespace std;

int main() {
 int T;
 cin >> T;
 while(T--)
 {
       int n,m;
    cin >> n >> m;
    int w[n];
    for (int i = 0; i < n; i++) {
        cin >> w[i];
    }
    int s;
    cin >> s;
    int dp[m + 1][s + 1];
    int mod = 1000000007; // Define the modulo value

    dp[0][0] = 1;
    for (int i = 1; i <= s; i++)
        dp[0][i] = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= m; j++) {
            if (w[i - 1] <= j) {
                dp[i][j] = (dp[i][j - w[i - 1]] + dp[i - 1][j]) % mod; // Apply modulo
            } else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    cout << dp[n][s] << endl;
 }
    return 0;
}
