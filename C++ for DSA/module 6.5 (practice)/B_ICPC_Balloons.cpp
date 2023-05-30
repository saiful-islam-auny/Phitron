#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int count = 0, n;
        char a[26] = {0};
        cin >> n;
        string c;   //char c[n] causing of compiler error, because the value of n is only can determine on runtime.
        cin >> c;

        for (int j = 0; j < n; j++)
        {
            int val = c[j] - 65;    //c[j] - 'A'
            if (a[val] == 0)
            {
                count += 2;
                a[val]++;
            }
            else
                count++;
        }

        cout<<count<<endl;
    }

    return 0;
}