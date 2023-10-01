#include<bits/stdc++.h>
using namespace std;

void binarySearch(vector<int>& num, int target) 
{
    int left = 0;
    int right = num.size() - 1;

    while (left <= right) 
    {
        int mid = left + (right - left) / 2;

        if (num[mid] == target) 
        {
            cout << mid << endl;
            return;
        } 
        else if (num[mid] < target) 
        {
            left = mid + 1;
        } 
        else 
        {
            right = mid - 1;
        }
    }

    cout << "Not Found" << endl;
}

int main() 
{
    int n, k;
    cin >> n;

    vector<int> num(n);

    for (int i = 0; i < n; i++)
        {
            cin >> num[i];
        }

    cin >> k;

    binarySearch(num, k);

    return 0;
}
