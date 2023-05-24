#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n>>k;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int min = INT_MAX, count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < min)
            min = a[i];
        count++;

        if (count == k)
        {
            cout << min << " ";
            min = INT_MAX;
            count=0;
        }
    }
    if(n%k!=0)
        cout<<min;

    return 0;
}