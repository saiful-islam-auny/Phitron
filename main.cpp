#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int j = 0; j < q; j++)
    {
        int sum = 0, l, r;
        cin >> l >> r;
        for (auto i = v.begin() + l - 1; i < v.end() - (v.size() - r); i++)
        {
            sum += *i;
        }
        cout << sum << endl;
    }

    return 0;
}