#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin>>n;

    vector <int> v(n);
    for (auto it = v.begin(); it < v.end(); it++)
    {
        cin>>*it;
    }

    for (int i = v.size()-1; i>=0; i--)
    {
        cout<<v[i]<<" ";
    }
    
    
    return 0;
}