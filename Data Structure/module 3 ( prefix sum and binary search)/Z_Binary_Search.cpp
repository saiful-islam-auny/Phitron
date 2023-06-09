#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    int v[n];

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v,v+n);

    while (q--)
    {
        int x;
        cin >> x;
        int l = 0, r = n - 1;
        bool flag = false;

        while (l <= r)
        {
            int mid = (r + l) / 2;
            if (v[mid] == x)
            {
                flag = true;
                break;
            }
            else if (x > v[mid])
            {
                l = mid + 1;
            }
            else
                r = mid - 1;
        }
        if (flag == true)
            cout << "found" << endl;
        else
            cout << "not found" << endl;
    }

    return 0;
}