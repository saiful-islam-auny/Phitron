#include <bits/stdc++.h>

using namespace std;

#define pi pair<int, int>

int n, m;
const int N = 1005;
char g[N][N];
bool visited[N][N];
vector<pi> path = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

bool isValid(int ci, int cj)
{
    if (ci >= 0 && ci < n && cj >= 0 && cj < m && g[ci][cj] == '.')
        return true;
    else
        return false;
}

void dfs(int si, int sj)
{
    visited[si][sj] = true;

    for (int i = 0; i < 4; i++)
    {
        pi p = path[i];
        int ci = si + p.first;
        int cj = sj + p.second;

        if (isValid(ci, cj) && !visited[ci][cj])
        {
            dfs(ci, cj);
        }
    }
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> g[i][j];
        }
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (g[i][j] == '.' && !visited[i][j])
            {
                count++;
                dfs(i, j);
            }
        }
    }

    cout<<count<<endl;

    return 0;
}