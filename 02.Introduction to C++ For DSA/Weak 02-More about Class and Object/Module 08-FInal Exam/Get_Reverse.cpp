#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<string>> students;
    for (int i = 0; i < n; i++) {
        vector<string> data(5);
        for (int j = 0; j < 5; j++) {
            cin >> data[j];
        }
        students.push_back(data);
    }
    reverse(students.begin(), students.end());
    for (auto student : students) {
        for (auto data : student) {
            cout << data << " ";
        }
        cout << endl;
    }
    return 0;
}