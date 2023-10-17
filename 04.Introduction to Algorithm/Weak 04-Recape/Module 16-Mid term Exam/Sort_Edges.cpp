#include<bits/stdc++.h>
using namespace std;
int main()
{
     int E;
    cin >> E;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    for (int i = 0; i < E; i++) {
        int A, B;
        cin >> A >> B;
        pq.push({A, B});
    }

    while (!pq.empty()) {
        pair<int, int> edge = pq.top();
        pq.pop();
        cout << edge.first << " " << edge.second << endl;
    }
    return 0;
}