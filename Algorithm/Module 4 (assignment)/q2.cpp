#include <bits/stdc++.h>
using namespace std;

int binarySearch(int a[], int l, int r, int k)
{
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (a[mid] == k)
        {
            return mid;
        }
        else if (k < a[mid])
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int k;
    cin >> k;
    int ans = binarySearch(a, 0, n - 1, k);

    if (ans != -1)
    {
        cout << ans << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }
    return 0;
}
