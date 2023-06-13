#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char matrix[n][n];
    // Fill the matrix with spaces
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = ' ';
        }
    }
     for (int i = 0; i < n; i++) {
        matrix[i][i] = '\\';
        matrix[i][n-1-i] = '/';
    }
    int middle = n / 2;
     matrix[middle][middle] = 'X';

     for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%c", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}