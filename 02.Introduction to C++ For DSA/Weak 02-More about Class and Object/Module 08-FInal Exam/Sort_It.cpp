#include <bits/stdc++.h>
using namespace std;

struct Student {
    string name;
    int cls;
    char section;
    int id;
    int math_marks;
    int eng_marks;
};

bool compareStudents(const Student& a, const Student& b) {
    int totalMarksA = a.math_marks + a.eng_marks;
    int totalMarksB = b.math_marks + b.eng_marks;

    if (totalMarksA == totalMarksB) {
        return a.id < b.id;
    } else {
        return totalMarksA > totalMarksB;
    }
}

int main() {
    int N;
    cin >> N;

    vector<Student> students(N);

    for (int i = 0; i < N; i++) {
        cin >> students[i].name >> students[i].cls >> students[i].section
             >> students[i].id >> students[i].math_marks >> students[i].eng_marks;
    }

    sort(students.begin(), students.end(), compareStudents);

    for (const Student& student : students) {
        cout << student.name << " " << student.cls << " " << student.section
             << " " << student.id << " " << student.math_marks << " " << student.eng_marks << "\n";
    }

    return 0;
}
