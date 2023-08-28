#include <bits/stdc++.h>

using namespace std;

#define pi pair<int, int>
const int N = 1005;
int n, m, si, sj, di, dj;
char g[N][N], s;
bool visited[N][N], flag;

vector<pi> path = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

bool isValid(int ci, int cj)
{
    if (ci >= 0 && ci < n && cj >= 0 && cj < m)
        return true;
    else
        return false;
}

void dfs(int si, int sj)
{
    visited[si][sj] = true;
    if (si == di && sj == dj)
    {
        flag = true;
    }
    for (int i = 0; i < 4; i++)
    {
        pi p = path[i];
        int ci = si + p.first;
        int cj = sj + p.second;

        if (isValid(ci, cj) && g[ci][cj]==s && !visited[ci][cj])
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
    cin >> si >> sj >> di >> dj;
    s = g[si][sj];
    dfs(si, sj);

    if (flag)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}