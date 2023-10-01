#include<bits/stdc++.h>
using namespace std;


void findDuplicate(vector<int>& arr, int n, int k) 
{
    int left = 0;
    int right = n - 1;

    while (left < right) {
        int mid = (left + right)/2;

        if (arr[mid] == k && (arr[mid] == arr[mid - 1])) 
        {
            cout << "YES" << endl;
            return;
        }

        if (arr[mid] == k && (arr[mid] == arr[mid + 1])) 
        {
            cout << "YES" << endl;
            return;
        }

        if (arr[mid] - arr[left] == mid - left) 
        {
            left = mid + 1;
        } 
        else 
        {
            right = mid - 1;
        }
    }

    cout << "NO" << endl;
}

int main() 
{
    int n;
    cin >> n;

    vector<int> arr(n);
 
    for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
    int k;
    cin >> k;

    findDuplicate(arr, n, k);

    return 0;
}
