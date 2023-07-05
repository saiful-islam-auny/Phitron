#include <bits/stdc++.h>

using namespace std;

int main()
{
    stack<int> s;
    queue<int> q;

    int n, m;

    cout << "Stack size: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int v;
        cin >> v;
        s.push(v);
    }
    cout << "Queue size: ";
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int v;
        cin >> v;
        q.push(v);
    }

    if (n != m)
    {
        cout << "NO";
    }
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