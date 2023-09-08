#include <bits/stdc++.h>

using namespace std;

int parent[1000];
int parentSize[1000];

void dsu_set(int n)
{
    for (int i = 1; i <= n; i++)
    {
        parent[i] = -1;
        parentSize[i] = 1;
    }
}

int dsu_find(int node)
{
    while (parent[node] != -1)
    {
        node = parent[node];
    }
    return node;
}

int dsu_union(int a, int b)
{
    int leaderA = dsu_find(a);
    int leaderB = dsu_find(b);

    if (leaderA == leaderB)
    {
        cout<<"Cycle detacted between: "<<a<<" "<<b<<endl;
        return 0;
    }
    else
    {
        if (parentSize[leaderA] > parentSize[leaderB])
        {
            parent[leaderB] = leaderA;
            parentSize[leaderA] += parentSize[leaderB];
        }
        else
        {
            parent[leaderA] = leaderB;
            parentSize[leaderB] += parentSize[leaderA];
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    dsu_set(n);

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        dsu_union(a, b);
    }

    // while (true)
    // {
    //     int x;
    //     cin >> x;
    //     if (x == -1)
    //         break;

    //     cout << "Leader of " << x << " : " << dsu_find(x) << endl;
    // }
    return 0;
}

/*
7 6
1 2
2 3
4 5
6 5
3 5
7 5
*/