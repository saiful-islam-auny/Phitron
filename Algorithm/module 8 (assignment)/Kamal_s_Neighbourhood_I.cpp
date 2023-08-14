#include <bits/stdc++.h>

using namespace std;

vector <int> adj[20];

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
    int k,c=0;
    cin>>k;

    for(int i : adj[k]) c++;
    cout<<c;
    
    return 0;
}