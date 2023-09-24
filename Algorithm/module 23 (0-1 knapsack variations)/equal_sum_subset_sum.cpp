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

    if (s % 2 == 0)
    {
        s = s/2;
        bool dp[n + 1][s + 1];
        dp[0][0] = true;
        for (int i = 1; i <= s; i++)
        {
            dp[0][i] = false;
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j <= s; j++)
            {
                if (a[i] <= j)
                {
                    dp[i][j] = dp[i - 1][j - a[i]] || dp[i - 1][j];
                }
                else
                {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }

        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= s; j++)
            {
                if (dp[i][j])
                    cout << "T ";
                else
                    cout << "F ";
            }
            cout << endl;
        }

        // if (dp[n][s])
        //     cout << "YES" << endl;
        // else
        //     cout << "NO" << endl;
    }
    else
        cout << "NO";
    return 0;
}