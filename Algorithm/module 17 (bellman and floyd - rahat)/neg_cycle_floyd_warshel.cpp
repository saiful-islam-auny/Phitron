#include <bits/stdc++.h>

using namespace std;

const int INF = 1e7;

int main()
{
    int n, e;
    cin >> n >> e;
    int d[n + 1][n + 1];
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
        int u, v, w;
        cin >> u >> v >> w;
        d[u][v] = w;
    }

    cout << "Input distance:" << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (d[i][j] == INF)
                cout << "I   ";
            else
                cout << d[i][j] << "   ";
        }
        cout << endl;
    }

    cout << endl;

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

                    if (i == j && d[i][j] < 0)
                    {
                        cout << "Negative cycle detacted";
                        return 0;
                    }
                }
            }
        }
    }

    cout << "Updated distance:" << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (d[i][j] == INF)
                cout << "I   ";
            else
                cout << d[i][j] << "   ";
        }
        cout << endl;
    }

    return 0;
}