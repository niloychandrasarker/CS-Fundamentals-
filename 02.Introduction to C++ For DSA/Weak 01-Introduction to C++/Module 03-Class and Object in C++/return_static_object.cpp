#include<bits/stdc++.h>
using namespace std;
int& getStaticObject() {
    static int staticVar = 42;  // Static object

    return staticVar;
}

int main() {
    int& objRef = getStaticObject();
    cout << "Value: " << objRef <<endl;

    return 0;
}
