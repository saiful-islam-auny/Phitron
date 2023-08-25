// works with negative edge

#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 10;
const int INF = 1e9 + 10;

typedef pair<int, int> pii;
vector<pii> g[N];
int d[N];
int node, edge;

void bellman(int s)
{
    for (int i = 1; i <= node; i++)
    {
        d[i] = INF;
    }
    d[s] = 0;

    for (int i = 1; i <= node - 1; i++)
    {
        for (int u = 1; u <= node; u++)
        {
            for (pii vpair : g[u])
            {
                int v = vpair.second;
                int w = vpair.first;

                if (d[u] != INF && d[u] + w < d[v])
                {
                    d[v] = d[u] + w;
                }
            }
        }
    }
}

// O(nm)

// O(n^2)

int main()
{
    cin >> node >> edge;
    while (edge--)
    {
        int u, v, w;
        cin >> u >> v >> w;
        g[u].push_back({w, v});
    }

    bellman(1);

    for (int i = 1; i <= node; i++)
    {
        cout << "Distance of " << i << ": " << d[i] << endl;
    }

    return 0;
}