/*
||-------------------------------------------||
||            Niloy Chandra Sarker           ||
|| Dept. of Computer science and Engineering ||
||   Faculty of engineering and technology   ||
||            University of Dhaka            ||
||-------------------------------------------||
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{

  int t;
    cin >> t;
    while (t--)
    {
        string s, x;
        cin >> s >> x;
        int res=0;
        while ((res= s.find(x, res)) !=-1)
        {
            s.replace(res, x.length(), "$");
            res += 1;
        }
        cout << s << endl;
    }

    return 0;
}
