#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c;
    char s, q;

    cin >> a;
    cin >> s;
    cin >> b;
    cin >> q;
    cin >> c;

    switch (s)
    {
    case '+':
        if (a + b == c)
            cout << "Yes";
        else
            cout << a + b;
        break;

    case '-':
        if (a - b == c)
            cout << "Yes";
        else
            cout << a - b;
        break;
    case '*':
        if (a * b == c)
            cout << "Yes";
        else
            cout << a * b;
        break;

    default:
        break;
    }

    return 0;
}