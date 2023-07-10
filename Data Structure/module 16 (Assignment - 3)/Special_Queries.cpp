#include <bits/stdc++.h>

using namespace std;

int main()
{
    queue<string> que;

    int q;
    cin >> q;

    while (q--)
    {
        int ope;
        cin >> ope;
        if (ope == 0)
        {
            string name;
            cin >> name;
            que.push(name);
        }
        else
        {
            if(!que.empty())
            {
                cout<<que.front()<<endl;
                que.pop();
            }
            else
                cout<<"Invalid"<<endl;
        }
    }

    return 0;
}