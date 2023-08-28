#include <bits/stdc++.h>

using namespace std;

#define pi pair<int, int>
const int N = 1005;
bool visited[N][N];
int dis[N][N];

vector<pi> path = {{-2, -1}, {-2, 1}, {2, -1}, {2, 1}, {-1, -2}, {1, -2}, {-1, 2}, {1, 2}};

bool isValid(int cI, int cJ)
{
    if (cI >= 0 && cI < 8 && cJ >= 0 && cJ < 8)
        return true;
    else
        return false;
}

void reset_level_vis()
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
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
    int n;
    cin >> n;
    while (n--)
    {
        string x, y;
        cin >> x >> y;
        int si, sj, di, dj;
        si = x[0] - 'a';
        sj = x[1] - '1';
        di = y[0] - 'a';
        dj = y[1] - '1';

        bfs(si, sj);
        cout << dis[di][dj] << endl;
        // for (int i = 7; i >= 0; i--)
        // {
        //     for (int j = 0; j < 8; j++)
        //     {
        //         cout <<dis[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        // cout<<endl;
        reset_level_vis();
    }
    return 0;
}