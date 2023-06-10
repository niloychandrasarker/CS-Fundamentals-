#include <iostream>
#include <string>

using namespace std;

int main() {
    int a, b, c;
    char s1, s2, q;
    cin >> a >> s1 >> b >> q >> c;

    if (s1 == '+' && a + b == c) {
        cout << "Yes" << endl;
    } else if (s1 == '-' && a - b == c) {
        cout << "Yes" << endl;
    } else if (s1 == '*' && a * b == c) {
        cout << "Yes" << endl;
    } else {
        if (s1 == '+') {
            cout  << a + b << endl;
        } else if (s1 == '-') {
            cout << a - b << endl;
        } else if (s1 == '*') {
            cout << a * b << endl;
        }
    }

    return 0;
}