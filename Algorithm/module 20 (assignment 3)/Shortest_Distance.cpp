#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
const ll INF = 1e18;
long long int d[105][105];

int main()
{
    ll n, e;
    cin >> n >> e;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            d[i][j] = INF;
            if (i == j)
                d[i][j] = 0;
        }
    }

    while (e--)
    {
        ll u, v, w;
        cin >> u >> v >> w;
        d[u][v] = min(d[u][v], w);
    }

    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (d[i][k] == INF || d[k][j] == INF)
                    continue;

                if (d[i][k] + d[k][j] < d[i][j])
                {
                    d[i][j] = d[i][k] + d[k][j];
                }
            }
        }
    }

    ll q;
    cin >> q;
    while (q--)
    {
        int x, y;
        cin >> x >> y;
        if (d[x][y] != INF)
            cout << d[x][y] << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}