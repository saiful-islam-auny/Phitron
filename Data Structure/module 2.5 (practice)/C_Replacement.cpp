#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector <int> v;
    int n; cin>>n;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    for (auto i = v.begin(); i < v.end(); i++)
    {
        if(*i<0)
            *i = 2;
        else if(*i>0)
            *i = 1;
    }
    
    for (int ele:v)
    {
        cout<<ele<<" ";
    }
    
    
    return 0;
}