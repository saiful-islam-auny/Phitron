#include <bits/stdc++.h>

using namespace std;

vector <int> v;

bool subsetSum(int n, int arr[], int s)
{
    if (n == 0 && s == 0)
        return true;
    else if (n == 0 && s != 0)
        return false;

    if (arr[n] <= s)
    {
        bool op1 = subsetSum(n - 1, arr, s - arr[n]);
        bool op2 = subsetSum(n - 1, arr, s);

        return op1 || op2;
    }
    else
    {
        bool op2 = subsetSum(n - 1, arr, s);
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

        if (subsetSum(n, arr, s))
        {
            cout << "YES"<<endl;
        }
        else
            cout << "NO"<<endl;
    }

    return 0;
}