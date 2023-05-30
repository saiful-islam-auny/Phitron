#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, sum1, sum2;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        sum1 = s[0] - 48 + s[1] - 48 + s[2] - 48;
        sum2 = s[3] - 48 + s[4] - 48 + s[5] - 48;
        if(sum1==sum2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}