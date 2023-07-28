#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();

    while (t--)
    {
        map<string, int> mp;

        string s, word, cmp;
        getline(cin, s);
        stringstream ss(s);

        int max = INT_MIN;
        while (ss >> word)
        {
            mp[word]++;
            if (mp[word] > max)
            {
                cmp = word;
                max = mp[word];
            }
        }

        for (auto i = mp.begin(); i != mp.end(); i++)
        {
            if (i->first == cmp)
                cout << i->first << " " << i->second << endl;
        }
    }
    return 0;
}