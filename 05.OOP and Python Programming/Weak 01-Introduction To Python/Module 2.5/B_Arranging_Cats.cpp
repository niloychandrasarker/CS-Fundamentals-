#include<bits/stdc++.h>
using namespace std;
int main()
{
      int t;
    cin >> t;

    while (t--) 
    {
        int n;
        cin >> n;

        string s, t;
        cin >> s >> t;

        int c1 = inner_product(s.begin(), s.end(), t.begin(), 0, plus<>(), 
            [](char sc, char tc) { return (sc == '0' && tc != '0'); });

        int c2 = inner_product(s.begin(), s.end(), t.begin(), 0, plus<>(), 
            [](char sc, char tc) { return (sc == '1' && tc == '0'); });

        int rst = max(c1, c2);
        cout << rst << endl;
    }

    return 0;
}