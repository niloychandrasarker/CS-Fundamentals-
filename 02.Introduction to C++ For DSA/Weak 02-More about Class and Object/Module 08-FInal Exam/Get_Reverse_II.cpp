#include <bits/stdc++.h>
using namespace std;

struct Student {
    string name;
    int cls;
    char section;
    int id;
};

void reverseIds(vector<Student>& students) {
    int start = 0;
    int end = students.size() - 1;
    while (start < end) {
        swap(students[start].id, students[end].id);
        start++;
        end--;
    }
}

int main() {
    int N;
    cin >> N;
    vector<Student> students(N);

    for (int i = 0; i < N; i++) {
        cin >> students[i].name >> students[i].cls >> students[i].section >> students[i].id;
    }

    reverseIds(students);

    for (const Student& student : students) {
        cout << student.name << " " << student.cls << " " << student.section << " " << student.id << "\n";
    }

    return 0;
}
