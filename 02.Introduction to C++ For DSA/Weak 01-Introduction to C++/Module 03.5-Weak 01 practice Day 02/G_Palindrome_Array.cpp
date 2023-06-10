#include <iostream>
using namespace std;

int main() {
    int n, arr[100000];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int is_palindrome = 1;
    for (int i = 0, j = n - 1; i < j; i++, j--) {
        if (arr[i] != arr[j]) {
            is_palindrome = 0;
            break;
        }
    }
    if (is_palindrome) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}