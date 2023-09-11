#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
const ll INF = 1e18;
ll d[1005];
bool cycle = false;

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

int n, e;
vector<Edge> ve;

void bellman(int dest)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < ve.size(); j++)
        {
            Edge ed = ve[j];
            int u = ed.u;
            int v = ed.v;
            int w = ed.w;

            if (d[u] != INF && d[u] + w < d[v])
            {
                d[v] = d[u] + w;
            }
        }
    }

    for (int j = 0; j < ve.size(); j++)
    {
        Edge ed = ve[j];
        int u = ed.u;
        int v = ed.v;
        int w = ed.w;

        if (d[u] != INF && d[u] + w < d[v])
        {
            cycle = true;
            break;
        }
    }

    if (cycle)
    {
        cout << "Negative Cycle Detected" << endl;
    }
    else
    {
        if (d[dest] != INF)
            cout << d[dest] << endl;
        else
            cout << "Not Possible" << endl;
    }
}

int main()
{
    cin >> n >> e;

    while (e--)
    {
        int u, v, w;
        cin >> u >> v >> w;
        Edge ed(u, v, w);
        ve.push_back(ed);
    }

    for (int i = 1; i <= n; i++)
    {
        d[i] = INF;
    }
    int s, t;
    cin >> s >> t;
    d[s] = 0;

    while (t--)
    {
        int dest;
        cin >> dest;
        bellman(dest);
        if (cycle)
            break;
    }

    return 0;
}