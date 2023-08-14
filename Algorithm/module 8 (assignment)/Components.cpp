#include <bits/stdc++.h>
using namespace std;
const int N=1005;
vector<int> adj[N];
bool check[N];

void dfs(int u, int &c)
{
    check[u] = true;
    c++;
    for (int v : adj[u])
    {
        if (check[v] == false)
            dfs(v, c);
    }
}

int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> v1;
    for (int i = 0; i <N; i++)
    {
        int c = 0;
        if (check[i] == false)
        {
            dfs(i, c);
            if (c > 1)
                v1.push_back(c);
        }
    }
    sort(v1.begin(), v1.end());
    for (int i : v1)
    {
        cout << i << " ";
    }

    return 0;
}