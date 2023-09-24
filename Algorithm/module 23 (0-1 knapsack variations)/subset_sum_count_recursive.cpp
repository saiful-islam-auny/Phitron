#include <bits/stdc++.h>

using namespace std;

int dp[1005][1005];

int subsetSumCount(int n, int arr[], int s)
{
    if (n == 0 && s == 0)
        return 1;
    else if (n == 0 && s != 0)
        return 0;

    if (dp[n][s] != -1)
        return dp[n][s];

    if (arr[n] <= s)
    {
        int op1 = subsetSumCount(n - 1, arr, s - arr[n]);
        int op2 = subsetSumCount(n - 1, arr, s);

        return dp[n][s] = op1 + op2;
    }
    else
    {
        return dp[n][s] = subsetSumCount(n - 1, arr, s);
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
        
        cout<<"Number: "<<subsetSumCount(n,arr,s)<<endl;
    }

    return 0;
}