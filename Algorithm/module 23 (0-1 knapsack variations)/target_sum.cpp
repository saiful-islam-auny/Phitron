#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, s = 0;
    cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        s += a[i];
    }
    int target, s1;
    cin >> target;

    s1 = (target + s) / 2;

    int dp[n + 1][s + 1];
    dp[0][0] = 1;
    for (int i = 1; i <= s; i++)
    {
        dp[0][i] = 0;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= s; j++)
        {
            if (a[i] <= j)
            {
                dp[i][j] = dp[i - 1][j - a[i]] + dp[i - 1][j];
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    // for (int i = 0; i <= n; i++)
    // {
    //     for (int j = 0; j <= s; j++)
    //     {
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    cout<<dp[n][s1];

    return 0;
}