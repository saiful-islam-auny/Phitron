#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();

    while (t--)
    {
        map<int, int> mp;

        int n;
        cin >> n;
        int max = INT_MIN, val, val_cnt;
        while (n--)
        {
            int x;
            cin >> x;
            mp[x]++;
            if (mp[x] > max)
            {
                val = x;
                max = mp[x];
            }
            else if (mp[x] == max)
            {
                if (x > val)
                {
                    val = x;
                    max = mp[x];
                }
            }
        }

        cout << val << " " << max << endl;
    }
    return 0;
}