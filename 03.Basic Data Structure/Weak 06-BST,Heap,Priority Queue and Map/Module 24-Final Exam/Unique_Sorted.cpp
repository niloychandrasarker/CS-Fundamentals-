/*
||-------------------------------------------||
||            Niloy Chandra Sarker           ||
|| Dept. of Computer science and Engineering ||
||   Faculty of engineering and technology   ||
||            University of Dhaka            ||
||-------------------------------------------||
*/
#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int T;
    cin >> T;

    while (T--) 
    {
        int N;
        cin >> N;

        list<int> A;
        int val;
        for (int i = 0; i < N; i++) 
        {
            cin >> val;
            A.push_back(val);
        }
        A.sort(greater<int>());
        A.unique();

      for(int value : A)
      {
      cout<< value <<" ";
      }
        cout << endl;
    }

    return 0;
}