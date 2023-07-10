#include <bits/stdc++.h>

using namespace std;

int main()
{
    stack<int> s;
    queue<int> q;

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.push(x);
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    if (n != m)
        cout << "NO";
    else
    {
        bool flag = true;
        while (!s.empty())
        {
            if (s.top() != q.front())
            {
                flag = false;
                break;
            }
            s.pop();
            q.pop();
        }

        if (flag)
            cout << "YES";
        else
            cout << "NO";
    }
    return 0;
}