#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int test;
    cin >> test;

    while (test--) {
        long long n, f, a, b;
        cin >> n >> f >> a >> b;

        long long prev_moment = 0;
        long long result = 0;

        vector<long long> moments(n);
        for (int i = 0; i < n; ++i) {
            cin >> moments[i];
        }

        for (int i = 0; i < n; ++i) {
            long long d = moments[i] - prev_moment;
            long long at = min(d * a, f);
            long long off = (d > 1) ? min(b, f) : 0;

            if (at <= off) {
                result++;
                f -= at;
            } else if (off <= f) {
                result++;
                f -= off;
            } else {
                break;
            }

            prev_moment = moments[i];
        }

        if (result < 4) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }

    return 0;
}
