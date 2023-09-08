#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 5;
vector<int> adj[N];
bool check[N];
vector<int> cmpnt;

void dfs(int u)
{
    check[u] = true;
    cmpnt.push_back(u);
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

    int c = 0;
    for (int i = 1; i <= n; i++)
    {
        if (check[i] == false)
        {
            dfs(i);
            if (cmpnt.size() > 1)   // single node note allow
            {
                c++;
                cout << "Component " << c << " : ";
                for (int ele : cmpnt)
                {
                    cout << ele << " ";
                }
                cout << endl;
                cmpnt.clear();
            }
        }
    }

    cout << "Total connected components: " << c;

    return 0;
}