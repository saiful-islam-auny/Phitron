#include <bits/stdc++.h>

using namespace std;
int dp[1005][1005];

int main()
{
    int n, s;
    cin >> n;
    int v[n], w[n];

    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> w[i];
    }
    cin >> s;

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= s; j++)
        {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            if (w[i] <= j)
            {
                dp[i][j] = max(v[i] + dp[i - 1][j - w[i]], dp[i - 1][j]);
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    // cout << dp[n][s] << endl;

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= s; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout<<endl;
    }
    return 0;
}