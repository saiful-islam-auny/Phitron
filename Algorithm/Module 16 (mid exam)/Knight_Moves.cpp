#include <bits/stdc++.h>

using namespace std;

#define pi pair<int, int>
const int N = 105;
bool visited[N][N];
int dis[N][N];
int n, m;

vector<pi> path = {{-2, -1}, {-2, 1}, {2, -1}, {2, 1}, {-1, -2}, {1, -2}, {-1, 2}, {1, 2}};

bool isValid(int cI, int cJ)
{
    if (cI >= 0 && cI < n && cJ >= 0 && cJ < m)
        return true;
    else
        return false;
}

void reset_level_vis()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            dis[i][j] = 0;
            visited[i][j] = false;
        }
    }
}
void bfs(int si, int sj)
{
    queue<pi> q;
    q.push({si, sj});
    dis[si][sj] = 0;
    visited[si][sj] = true;
    while (!q.empty())
    {
        pi parent = q.front();
        int pI = parent.first;
        int pJ = parent.second;
        q.pop();
        for (int i = 0; i < 8; i++)
        {
            pi p = path[i];
            int cI = pI + p.first;
            int cJ = pJ + p.second;
            if (isValid(cI, cJ) && !visited[cI][cJ])
            {
                visited[cI][cJ] = true;
                q.push({cI, cJ});
                dis[cI][cJ] = dis[pI][pJ] + 1;
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int si, sj, di, dj;
        cin >> n >> m;
        cin >> si >> sj >> di >> dj;

        reset_level_vis();
        bfs(si, sj);

        if (visited[di][dj])
            cout << dis[di][dj] << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}