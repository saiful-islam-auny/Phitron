#include <bits/stdc++.h>

using namespace std;

const int N = 1e5+5;
vector <int> adj[N];
bool check[N];

void dfs(int u)
{
    check[u] = true;
    cout<<u<<" ";
    for(int v : adj[u])
    {
        if(check[v]==false)
        dfs(v);
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
        adj[v].push_back(u);
    }
    cout<<"Visited Node: ";
    dfs(1);

    cout<<endl;
    for (int i = 1; i <= n; i++)
    {
        cout<<"List "<<i<<" :";
        for(int j : adj[i])
        {
            cout<<j<<" ";
        }
        cout<<endl;
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
*/