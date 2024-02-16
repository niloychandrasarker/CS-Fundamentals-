#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--) 
    {
        int x[4], y[4];

        for (int i = 0; i < 4; ++i) 
        {
            cin >> x[i] >> y[i];
        }

        sort(x, x + 4);
        sort(y, y + 4);

        int s = max(x[2] - x[1], y[2] - y[1]);
        int a = s * s;

        cout << a << endl;
    }

    return 0;
}