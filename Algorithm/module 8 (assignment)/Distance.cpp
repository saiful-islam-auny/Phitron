#include <bits/stdc++.h>

using namespace std;

vector<int> adj[100005];

int bfs(int s, int d)
{
    int level[100005];
    bool check[100005] = {false};

    queue<int> q;
    q.push(s);
    check[s] = true;
    level[s] = 0;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        if (u == d)
            return level[u];

        for (int v : adj[u])
        {
            if (check[v] == false)
            {
                q.push(v);
                check[v] = true;
                level[v] = level[u] + 1;
            }
        }
    }
    return -1;
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
    int q;
    cin >> q;
    while (q--)
    {
        int s, d;
        cin >> s >> d;
        cout << bfs(s, d) << endl;
    }

    return 0;
}