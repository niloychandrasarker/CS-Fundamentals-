#include <bits/stdc++.h>
using namespace std;

vector<int> adj[100001];
int level[100001];

int main() {
    int n, e;
    cin >> n >> e;

    for (int i = 0; i < e; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    int l;
    cin >> l;

    fill(level, level + n, -1);

    queue<int> q;
    q.push(0); 
    level[0] = 0;

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        for (int v : adj[u]) {
            if (level[v] == -1) {
                q.push(v);
                level[v] = level[u] + 1;
            }
        }
    }

    if (l == 0) {
        cout << "0" << endl;
    } else {
        vector<int> pizzaShops;

        for (int i = 0; i < n; i++) {
            if (level[i] == l) {
                pizzaShops.push_back(i);
            }
        }

        if (pizzaShops.empty()) {
            cout << -1 << endl;
        } else {
            sort(pizzaShops.begin(), pizzaShops.end()); 
            for (int shop : pizzaShops) {
                cout << shop << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
