#include <bits/stdc++.h>
using namespace std;

const long long INF = 1e18;

class Edge
{
public:
    int u;
    int v;
    int w;
    Edge(int u, int v, int w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

int main() 
{
    int N, E;
    cin >> N >> E;

    vector<Edge> edges;

    for (int i = 0; i < E; i++) 
    {
        int A, B;
        long long W;
        cin >> A >> B >> W;
        edges.emplace_back(A, B, W);
    }

    int S;
    cin >> S;

    int T;
    cin >> T;

    vector<long long> dist(N + 1, INF);
    dist[S] = 0;

    
    for (int i = 1; i <= N - 1; i++) 
    {
        for (const Edge& edge : edges) 
        {
            int A = edge.u;
            int B = edge.v;
            long long W = edge.w;
            if (dist[A] != INF && dist[A] + W < dist[B]) 
            {
                dist[B] = dist[A] + W;
            }
        }
    }

    bool hasNegativeCycle = false;
    for (const Edge& edge : edges) 
    {
        int A = edge.u;
        int B = edge.v;
        long long W = edge.w;
        if (dist[A] != INF && dist[A] + W < dist[B]) 
        {
            hasNegativeCycle = true;
            break;
        }
    }

    if (hasNegativeCycle) 
    {
        cout << "Negative Cycle Detected" << endl;
    } 
    else 
    {
        while (T--) 
        {
            int D;
            cin >> D;

            if (dist[D] == INF) 
            {
                cout << "Not Possible" << endl;
            } 
            else 
            {
                cout << dist[D] << endl;
            }
        }
    }

    return 0;
}
