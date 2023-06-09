#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    long long int a[n], pre_sum[n], sum;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i == 0)
        {
            pre_sum[i] = a[i];
        }
        else
        {
            pre_sum[i] = pre_sum[i - 1] + a[i];
        }
    }

    for (int i = n - 1; i >= 0; i--)
    {
        cout << pre_sum[i] << " ";
    }

    return 0;
}