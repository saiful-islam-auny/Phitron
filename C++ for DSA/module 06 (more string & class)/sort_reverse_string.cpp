#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, ss;
    cin >> s;
    ss = s;
    sort(s.begin(), s.end());
    reverse(ss.begin(), ss.end());
    cout << s << endl;
    cout << ss << endl;
    return 0;
}