#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int ans = a[0] + a[1] + 1;
        for (int i = 0; i < n-1; i++) {
            for (int j = i+1; j < n; j++) {
                ans = min(ans, a[i]+a[j]+j-i);
            }
        }
        cout << ans<< endl;
    }
    return 0;
}