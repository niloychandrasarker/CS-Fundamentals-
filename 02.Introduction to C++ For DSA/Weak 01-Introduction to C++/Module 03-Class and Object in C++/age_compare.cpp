#include<bits/stdc++.h>
using namespace std;

class Person {
public:
    string name;
    float height;
    int age;

    Person(std::string name, float height, int age) {
        this->name = name;
        this->height = height;
        this->age = age;
    }
};

int main() {
    Person person1("Niloy", 165.0, 28);
    Person person2("Omrit", 180.5, 32);

    if (person1.age > person2.age) {
        cout << person1.name << " is older." << endl;
    } else if (person2.age > person1.age) {
        cout << person2.name << " is older." << endl;
    } else {
        std::cout << "They are the same age." << endl;
    }

    return 0;
}
