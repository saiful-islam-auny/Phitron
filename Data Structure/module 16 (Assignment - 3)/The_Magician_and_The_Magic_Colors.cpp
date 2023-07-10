#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        stack<char> s, cpy;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            char c;
            cin >> c;

            if (s.empty())
            {
                s.push(c);
            }
            else if ((c == 'R' && s.top() == 'B') || (c == 'B' && s.top() == 'R'))
            {
                s.pop();
                if (!s.empty() && s.top() == 'P')
                    s.pop();
                else
                    s.push('P');
            }
            else if ((c == 'R' && s.top() == 'G') || (c == 'G' && s.top() == 'R'))
            {
                s.pop();
                if (!s.empty() && s.top() == 'Y')
                    s.pop();
                else
                    s.push('Y');
            }
            else if ((c == 'G' && s.top() == 'B') || (c == 'B' && s.top() == 'G'))
            {
                s.pop();
                if (!s.empty() && s.top() == 'C')
                    s.pop();
                else
                    s.push('C');
            }
            else if (c == s.top())
                s.pop();
            else
                s.push(c);
        }
        
        while (!s.empty())
        {
            cpy.push(s.top());
            s.pop();
        }
        while (!cpy.empty())
        {
            cout << cpy.top();
            cpy.pop();
        }
        cout << endl;
    }
    return 0;
}
