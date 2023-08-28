#include <bits/stdc++.h>

using namespace std;

#define pi pair<int, int>
int n, m;
const int N = 1005;
bool visited[N][N];
char g[N][N];
vector<pi> path = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

bool isValid(int ci, int cj)
{
    if (ci >= 0 && ci < n && cj >= 0 && cj < m)
        return true;
    else
        return false;
}

int cnt;
void dfs(int si, int sj)
{
    visited[si][sj] = true;
    cnt++;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + path[i].first;
        int cj = sj + path[i].second;

        if (isValid(ci, cj) && !visited[ci][cj] && g[ci][cj] == '.')
        {
            dfs(ci, cj);
        }
    }
}

int main()
{
    cin >> n >> m;
    int mn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> g[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (g[i][j] == '.' && !visited[i][j])
            {
                cnt = 0;
                dfs(i, j);
                mn = min(cnt,mn);
            }
        }
    }

    if (mn < INT_MAX)
        cout << mn << endl;
    else
        cout << -1 << endl;

    return 0;
}
