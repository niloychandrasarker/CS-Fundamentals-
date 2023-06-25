#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main() {
    list<string> addresses;
    string address;

    while (cin >> address) {
        if (address == "end") {
            break;
        }
        addresses.push_back(address);
    }

    int Q;
    cin >> Q;

    auto current = addresses.begin();

    while (Q--) {
        string command;
        cin >> command;

        if (command == "visit") {
            string visitAddress;
            cin >> visitAddress;

            auto it = find(addresses.begin(), addresses.end(), visitAddress);
            if (it != addresses.end()) {
                current = it;
                cout << *current << endl;
            } else {
                cout << "Not Available" << endl;
            }
        } else if (command == "next") {
            current++;
            if (current != addresses.end()) {
                cout << *current << endl;
            } else {
                current--;
                cout << "Not Available" << endl;
            }
        } else if (command == "prev") {
            if (current != addresses.begin()) {
                current--;
                cout << *current << endl;
            } else {
                cout << "Not Available" << endl;
            }
        }
    }

    return 0;
}
