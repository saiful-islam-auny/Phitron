#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        int zF = 0, kF = 0, zC = 0, kC = 0;
        int idx=0;
        while (idx!=s.size())
        {
            if (s[idx] == 0 && zF == 0)
            {
                for(int j=idx+1; j<s.size(); j++)
                {
                    if(s[j]==0)
                        break;
                    else
                        kC++;
                    idx++;
                }
            }
        }
    }
    return 0;
}