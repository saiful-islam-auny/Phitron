#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 5;
vector<int> adj[N];
bool check[N];
int level[N];

void bfs(int n)
{
    queue<int> q;
    q.push(n);
    check[n] = true;
    level[n] = 0;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        cout <<"Visited Node: "<< u <<" - level: "<<level[u]<< endl;
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
    bfs(1);

    return 0;
}