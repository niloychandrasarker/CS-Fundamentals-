#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int test;
    cin >> test;

    while (test--) {
        int n;
        cin >> n;

        string s, t;
        cin >> s >> t;

        int cat1 = count_if(s.begin(), s.end(), t.begin(), [](char sc, char tc) {
            return (sc == '0' && tc != '0');
        });

        int cat2 = count_if(s.begin(), s.end(), t.begin(), [](char sc, char tc) {
            return (sc == '1' && tc == '0');
        });

        int result = max(cat1, cat2);
        cout << result << endl;
    }

    return 0;
}
