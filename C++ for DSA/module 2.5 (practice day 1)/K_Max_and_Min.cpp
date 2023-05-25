#include <bits/stdc++.h>

using namespace std;

int main()
{
    int big, sml, a, b, c;
    cin >> a >> b >> c;

    if (a <= b && a <= c)
    {
        sml = a;
        if (b <= c)
            big = c;
        else
            big = b;
    }

    else if (b <= a && b <= c)
    {
        sml = b;
        if (a <= c)
            big = c;
        else
            big = a;
    }
    else
    {
        sml = c;
        if (a <= b)
            big = b;
        else
            big = a;
    }

    cout << sml << " " << big;

    return 0;
}