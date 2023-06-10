#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    getline(cin, input);

    string delimiter = " ";
    size_t pos = 0;
    string token;

    while ((pos = input.find(delimiter)) != string::npos) {
        token = input.substr(0, pos);
        if (token == "Ratul") {
            cout << "YES" << endl;
            return 0;
        }
        input.erase(0, pos + delimiter.length());
    }

    if (input == "Ratul") {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}