#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<int, int> mp;
        while (n--)
        {
            int x;
            cin >> x;
            mp[x]++;
        }
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            if (it->second % 2 != 0)
            {
                cout<<it->first<<endl;
                break;
            }
        }
    }
    return 0;
}