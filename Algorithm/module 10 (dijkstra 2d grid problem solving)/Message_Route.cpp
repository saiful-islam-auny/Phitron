#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 10;
vector<int> g[N];
vector<int> parent(N, -1);
bool visited[N];
int level[N];

void bfs(int source)
{
    level[source] = 0;
    visited[source] = true;
    queue<int> q;
    q.push(source);

    while (!q.empty())
    {
        int select = q.front();
        q.pop();
        for (int v : g[select])
        {
            if (visited[v] == false)
            {
                visited[v] = true;
                q.push(v);
                parent[v] = select;
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
        g[u].push_back(v);
        g[v].push_back(u);
    }
    bfs(1);

    if (visited[n])
    {

        vector<int> path;
        int cur = n, k = 0;
        while (cur != -1)
        {
            k++;
            path.push_back(cur);
            cur = parent[cur];
        }
        reverse(path.begin(), path.end());

        cout << k << endl;
        for (int ele : path)
        {
            cout << ele << " ";
        }
    }
    else
        cout<<"IMPOSSIBLE"<<endl;

    return 0;
}