#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        stack <char> s;
        string x;
        cin >> x;

        for (char c : x)
        {
            if (s.empty() || c==s.top())
            {
                s.push(c);
            }
            else
                s.pop();
        }
        if(s.empty())
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}