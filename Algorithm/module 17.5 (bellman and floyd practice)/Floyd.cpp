#include <bits/stdc++.h>

using namespace std;


const int INF = 1e7;
int main()
{
    int n;
    cin >> n;

    int d[n + 1][n + 1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> d[i][j];
            if (d[i][j] == -1)
                d[i][j] = INF;
        }
    }

    int mx = INT_MIN;
    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (d[i][k] + d[k][j] < d[i][j])
                {
                    d[i][j] = d[i][k] + d[k][j];
                }
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (d[i][j] != INF)
            {
                mx = max(mx, d[i][j]);
            }
        }
    }

        cout << mx << endl;

        return 0;
}