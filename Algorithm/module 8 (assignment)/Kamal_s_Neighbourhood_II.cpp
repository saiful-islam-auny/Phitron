#include <bits/stdc++.h>

using namespace std;

vector <int> adj[20];
bool check [20];

void dfs(int u,int &c)
{
    check[u] = true;
    c++;
    for(int v : adj[u])
    {
        if(check[v]==false)
        dfs(v,c);
    }
}

int main()
{
    int n,m;
    cin>>n>>m;

    for (int i = 0; i < m; i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
    }
    int k,c=0;
    cin>>k;

    dfs(k,c);

    cout<<c-1;
    
    return 0;
}