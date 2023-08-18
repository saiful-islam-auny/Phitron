#include <bits/stdc++.h>

using namespace std;
const int N = 1e5 + 5;
const long long int INF = 1e18;
vector<pair<int, int>> adj[N];
bool visited[N];
long long int weight[N];
int parent[N];
int nodes, edges;

void dijkstra(int src)
{
    for (int i = 1; i <= nodes; i++)
    {
        weight[i] = INF;
    }
    weight[src] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({weight[src], src});

    while (!pq.empty())
    {
        pair<int, int> p = pq.top();
        pq.pop();

        int currentNode = p.second;
        if (visited[currentNode] == false)
            visited[currentNode] = true;

        for (auto child : adj[currentNode])
        {
            int childNode = child.second;
            int edgeCost = child.first;

            if (visited[childNode] == false)
            {
                if (weight[currentNode] + edgeCost < weight[childNode])
                {
                    weight[childNode] = weight[currentNode] + edgeCost;
                    pq.push({weight[childNode], childNode});
                    parent[childNode] = currentNode;
                }
            }
        }
    }
}

int main()
{
    cin >> nodes >> edges;
    for (int i = 0; i < edges; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({w, v});
        adj[v].push_back({w, u});
    }
    dijkstra(1);

    if(visited[nodes]==false)
    {
        cout<<"-1"<<endl;
        return 0;
    }

    vector<int> paths;
    int current = nodes;

    while (true)
    {
        paths.push_back(current);
        if (current == 1)
        {
            break;
        }
        current = parent[current];
    }

    reverse(paths.begin(), paths.end());

    for (int val : paths)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}