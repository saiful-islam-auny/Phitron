#include <bits/stdc++.h>

using namespace std;

const int N = 1e3 + 5;
int adjmatx[N][N];

int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adjmatx[u][v] = 1;
        adjmatx[v][u] = 1;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << adjmatx[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}