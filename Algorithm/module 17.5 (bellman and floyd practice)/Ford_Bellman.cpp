#include <bits/stdc++.h>

using namespace std;

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

int main()
{
    cin >> n >> e;
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
        d[i] = INT_MAX;
    }
    d[1] = 0;

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
        if (d[i]<INT_MAX)
            cout << d[i] << " ";
        else
            cout << 30000 << " ";
    }

    return 0;
}