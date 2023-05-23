#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int min_num = min({a, b, c});
    int max_num = max({a, b, c});
    cout << min_num << " " << max_num;
    return 0;
} 