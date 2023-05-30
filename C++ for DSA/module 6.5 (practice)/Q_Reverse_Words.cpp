#include <bits/stdc++.h>

using namespace std;

int main()
{
    int c1 = 0, c2 = 0;
    string s, w;
    getline(cin, s);
    stringstream ss, cc;
    ;
    ss << s;
    cc << s;

    while (ss >> w)
    {
        c1++;
    }
    while (cc >> w)
    {
        c2++;
        reverse(w.begin(), w.end());
        cout << w;
        if (c1 != c2)
            cout << " ";
    }
    return 0;
}