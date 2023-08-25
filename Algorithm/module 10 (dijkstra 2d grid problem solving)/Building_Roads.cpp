#include <bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
vector<int> g[N];
bool visited[N];

void dfs(int u)
{
    visited[u]=true;
    for(int v : g[u])
    {
        if(!visited[v])
        {
            dfs(v);
        }
    }
}

int main()
{
    int n,e;
    cin>>n>>e;
    for (int i = 0; i <e; i++)
    {
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    vector <int> node;
    for (int i = 1; i <=n; i++)
    {
        if(visited[i]==false)
        {
            node.push_back(i);
            dfs(i);
        }
    }

    cout<<node.size()-1<<endl;
    for (int i = 0; i <node.size()-1; i++)
    {
        cout<<node[i]<<" "<<node[i+1]<<endl;
    }
    
       
    return 0;
}