#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 5;
vector<int> adj[N];
bool check[N];

void dfs(int u)
{
    check[u] = true;
    cout<<u<<" ";
    for (int v : adj[u])
    {
        if (check[v] == false)
        {
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

    int cc = 0;
    for (int i = 1; i <= n; i++)
    {
        if(check[i]==false)
        {
            cout<<"Component "<<cc+1<<" :";
            dfs(i);
            cc++;
            cout<<endl;
        }
    }

    cout<<"Total connected components: "<<cc;

    return 0;
}