#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 5;
vector<int> adj[N];
bool check[N];

int depth[N];
int height[N];

void dfs(int u)
{
    check[u] = true;
    // cout << u << " ";
    for (int v : adj[u])
    {
        if (check[v] == false)
        {
            depth[v] = depth[u] + 1;
            dfs(v);
            height[u] = max(height[u], height[v] + 1);
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

    dfs(1);

    for (int i = 1; i <= n; i++)
    {
        cout << "Depth " << i << ": " << depth[i] << endl;
    }
    cout << endl;

    for (int i = 1; i <= n; i++)
    {
        cout << "Height " << i << ": " << height[i] << endl;
    }

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