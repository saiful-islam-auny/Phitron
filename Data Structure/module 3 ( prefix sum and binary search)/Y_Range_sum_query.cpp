// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     int n, q;
//     cin >> n >> q;
//     vector<int> v(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }

//     for (int i = 0; i < q; i++)
//     {
//         int l, r, sum = 0;
//         cin >> l >> r;
//         for (auto it = v.begin() + l - 1; it < v.end() - (v.size() - r); it++)
//         {
//             sum += *it;
//         }
//         cout << sum << endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n+1);
    vector<long long int> idx_sum(n+1, 0);

    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        idx_sum[i] = idx_sum[i - 1] + v[i];
    }
    for (int j = 0; j < q; j++)
    {
        int l, r;
        long long int sum;
        cin >> l >> r;
        sum = idx_sum[r] - idx_sum[l - 1];
        cout << sum << endl;
    }

    return 0;
}