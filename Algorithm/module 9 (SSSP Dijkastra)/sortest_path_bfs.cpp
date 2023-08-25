#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 5;
vector<int> adj[N];
bool check[N];
int level[N];
int parent[N];

void bfs(int s) //O(n+m)
{
    queue<int> q;
    q.push(s);
    check[s] = true;
    level[s] = 0;
    parent[s] = -1;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        for (int v : adj[u])
        {
            if (check[v] == false)
            {
                q.push(v);
                check[v] = true;
                level[v] = level[u] + 1;
                parent[v] = u;
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

    int s, d;
    cin >> s >> d;

    bfs(s);

    cout <<"Distance: " <<level[d] << endl;

    // for (int i = 1; i <= n; i++)
    // {
    //     cout << "Parent of " << i << " : " << parent[i] << endl;
    // }

    vector<int> path;
    int cur = d;

    while (cur != -1)
    {
        path.push_back(cur);
        cur = parent[cur];
    }

    reverse(path.begin(), path.end());

    cout << "Path: ";
    for (int node : path)
    {
        cout << node << " ";
    }

    return 0;
}

/*
6
8
0 2
0 4
0 5
1 4
1 5
2 3
2 4
4 5

7
7
1 3
1 2
3 4
4 6
6 5
2 5
5 7
*/