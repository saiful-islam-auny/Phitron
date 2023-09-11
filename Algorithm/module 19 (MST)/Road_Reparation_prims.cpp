#include <bits/stdc++.h>

using namespace std;

#define pi pair<int, int>
const int N = 1e5 + 10;
vector<pi> adj[N];
bool visited[N];
int n, e;

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

class cmp
{
public:
    bool operator()(Edge a, Edge b)
    {
        return a.w > b.w;
    }
};

void prims(int s)
{
    long long int sum = 0, count = 0;
    priority_queue<Edge, vector<Edge>, cmp> pq;
    pq.push(Edge(s, s, 0));

    while (!pq.empty())
    {
        Edge p = pq.top();
        pq.pop();
        int v = p.v;
        int w = p.w;

        if (visited[v])
            continue;
        visited[v] = true;
        sum += w;
        count++;

        for (auto child : adj[v])
        {
            if (!visited[child.first])
            {
                pq.push(Edge(v, child.first, child.second));
            }
        }
    }

    if (count == n)
        cout << sum << endl;
    else
        cout << "IMPOSSIBLE" << endl;
}

int main()
{
    cin >> n >> e;
    while (e--)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }
    prims(1);
    return 0;
}
