#include <bits/stdc++.h>

using namespace std;

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
    int n, e, s;
    cin >> n >> e >> s;
    vector<Edge> ve;

    while (e--)
    {
        int u, v, w;
        cin >> u >> v >> w;
        Edge ed(u, v, w);
        ve.push_back(ed);
    }

    int d[n + 1];
    for (int i = 1; i <= n; i++)
    {
        d[i] = 1e8;
    }
    d[s] = 0;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < ve.size(); j++)
        {
            Edge ed = ve[j];
            int u = ed.u;
            int v = ed.v;
            int w = ed.w;

            if (d[u] != INT_MAX && d[u] + w < d[v])
            {
                d[v] = d[u] + w;
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        cout << d[i] << " ";
    }

    return 0;
}