#include <bits/stdc++.h>

using namespace std;

int dp[1005][1005];

bool subsetSum(int n, int arr[], int s)
{
    if (n == 0 && s == 0)
        return true;
    else if (n == 0 && s != 0)
        return false;

    if (dp[n][s] != -1)
        return dp[n][s];

    if (arr[n] <= s)
    {
        bool op1 = subsetSum(n - 1, arr, s - arr[n]);
        bool op2 = subsetSum(n - 1, arr, s);

        return dp[n][s] = op1 || op2;
    }
    else
    {
        return dp[n][s] = subsetSum(n - 1, arr, s);
    }
}

int main()
{
    int n, s;
    cin >> n;
    int arr[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    while (true)
    {
        cin >> s;

        if (s == -1)
            break;

        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= s; j++)
            {
                dp[i][j] = -1;
            }
        }
        
        if (subsetSum(n, arr, s))
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}