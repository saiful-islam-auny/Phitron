#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--) //O(t*N log N)
    {
        priority_queue<int> q;
        set<int> s;

        int n;
        cin >> n;
        while (n--) //O(N log N)
        {
            int x;
            cin >> x;
            s.insert(x);
        }

        for (auto it = s.begin(); it != s.end(); it++) //O(N log N)
        {
            q.push(*it);
        }

        while(!q.empty()) //O(N log N)
        {
            cout<<q.top()<<" ";
            q.pop();
        }
        cout<<endl;
    }
    return 0;
}