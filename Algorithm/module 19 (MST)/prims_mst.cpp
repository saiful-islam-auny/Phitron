#include <bits/stdc++.h>

using namespace std;

#define pi pair<int, int>
const int N = 1e5 + 10;
vector<pi> adj[N];
bool visited[N];

class Edge
{
public:
    int u;
    int v;
    int w;
    Edge(int u, int v, int w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

class cmp
{
public:
    bool operator()(Edge a, Edge b)
    {
        return a.w > b.w;
    }
};

void prims(int s)
{
    priority_queue<Edge, vector<Edge>, cmp> pq;
    vector<Edge> edgeList;
    pq.push(Edge(s, s, 0));

    while (!pq.empty())
    {
        Edge p = pq.top();
        pq.pop();
        int u = p.u;
        int v = p.v;
        int w = p.w;

        if (visited[v])
            continue;
        visited[v] = true;
        edgeList.push_back(p);

        for (auto child : adj[v])
        {
            if (!visited[child.first])
            {
                pq.push(Edge(v, child.first, child.second));
            }
        }
    }

    edgeList.erase(edgeList.begin());

    cout<<"MST :"<<endl;
    for (auto ele : edgeList)
    {
        cout<<ele.u<<" "<<ele.v<<" "<<ele.w<<endl;
    }
    
}

int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int u, v, w;
        cin>>u>>v>>w;
        adj[u].push_back({v, w});
        adj[v].push_back({u,w});
    }
    prims(1);
    return 0;
}

/*
8 11
1 5 2
1 2 4
1 4 10
5 4 5
2 4 8
2 3 18
3 4 11
4 8 9
4 7 11
7 6 1
8 6 2
*/