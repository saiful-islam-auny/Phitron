#include <bits/stdc++.h>

using namespace std;

const long long int N = 1005;
const long long int INF = 1e18;
vector<pair<long long int, long long int>> adj[N];
long long int nodeWeight[N];
bool visited[N];
long long int n, e, s, d, t, dw;

void dijkstra(long long int s)
{
    for (int i = 1; i <= n; i++)
    {
        nodeWeight[i] = INF;
    }
    nodeWeight[s] = 0;
    priority_queue<pair<long long int, long long int>, vector<pair<long long int, long long int>>, greater<pair<long long int, long long int>>> pq;
    pq.push({nodeWeight[s], s});

    while (!pq.empty())
    {
        pair<long long int, long long int> f = pq.top();
        pq.pop();

        int selectedNode = f.second;

        if (visited[selectedNode])
            continue;

        visited[selectedNode] = true;

        for (auto child : adj[selectedNode])
        {
            long long int edgeCost = child.first;
            long long int v = child.second;

            if (nodeWeight[selectedNode] + edgeCost < nodeWeight[v])
            {
                nodeWeight[v] = nodeWeight[selectedNode] + edgeCost;
                pq.push({nodeWeight[v], v});
            }
        }
    }
}

int main()
{
    cin >> n >> e;

    for (int i = 0; i < e; i++)
    {
        long long int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({w, v});
    }
    cin >> s >> t;

    dijkstra(s);

    while (t--)
    {
        cin >> d >> dw;

        if (nodeWeight[d] <= dw)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
