#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> b(n);
    vector<int> c(n * 2);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    c = b;
    for (int i = 0; i < n; i++)
    {
        c.push_back(a[i]);
    }

    for (int ele : c)
    {
        cout << ele << " ";
    }

    return 0;
}