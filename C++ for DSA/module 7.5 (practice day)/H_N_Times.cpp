#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        char c;
        cin >> n >> c;
        for (int j = 0; j < n; j++)
        {
            cout<<c;
            if(j!=n-1)
                cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}