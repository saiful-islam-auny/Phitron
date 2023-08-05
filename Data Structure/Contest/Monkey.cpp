#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    while (getline(cin, s))
    {
        int alp[26] = {0};
        for (char c : s)
        {
            alp[c - 97]++;
        }
        for (int i = 0; i < 26; i++)
        {
            if (alp[i] != 0)
            {
                for (int j = 0; j < alp[i]; j++)
                {
                    char ch = i + 97;
                    cout << ch;
                }
            }
        }
        cout << endl;
    }
    return 0;
}