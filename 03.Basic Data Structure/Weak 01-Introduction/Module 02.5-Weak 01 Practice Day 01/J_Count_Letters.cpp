#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string S;
    cin >> S;

    vector<int> count(26, 0);  // Initialize a vector to store the count of each letter

    // Iterate over each character in the string and update the count
    for (char ch : S) {
        if (ch >= 'a' && ch <= 'z') {
            count[ch - 'a']++;
        }
    }

    // Iterate over the count vector and print the result
    for (int i = 0; i < 26; i++) {
        if (count[i] > 0) {
            cout << (char)('a' + i) << " : " << count[i] << endl;
        }
    }

    return 0;
}
