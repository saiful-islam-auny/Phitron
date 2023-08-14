#include <bits/stdc++.h>

using namespace std;

vector<int> adj[100005];
int level[100005];
bool check[100005];

int bfs(int n, int l)
{
    bool flag = false;
    queue<int> q;
    q.push(n);
    check[n] = true;
    level[n] = 0;
    vector<int> v1;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        if (level[u] == l)
        {
            v1.push_back(u);
            flag = true;
        }
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
    if (flag)
    {
        sort(v1.begin(), v1.end());
        for (int i : v1)
        {
            cout << i << " ";
        }
    }
    else
    {
        cout << "-1" << endl;
    }
    return 0;
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
    int l;
    cin >> l;
    bfs(0, l);

    return 0;
}