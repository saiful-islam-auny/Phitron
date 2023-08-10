#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 5;
vector<int> adj[N];
bool check[N];

int depth[N];

void dfs(int u)
{
    check[u] = true;
    for (int v : adj[u])
    {
        if (check[v] == false)
        {
            depth[v] = depth[u] + 1;
            dfs(v);
        }
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
    int x;
    cin >> x;

    dfs(1);

    cout <<"Depth of "<<x<<" = "<< depth[x] << endl;

    return 0;
}

/*
5
5
1 2
2 5
2 4
1 3
3 4

6
5
1 2
1 3
3 4
3 5
5 6
*/