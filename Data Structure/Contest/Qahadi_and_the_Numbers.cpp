#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,count=0;
        cin>>n;
        map <int,int> mp;
        while(n--)
        {
            int x; cin>>x;
            mp[x]++;
        }
        for(auto i=mp.begin(); i!= mp.end(); i++)
        {
            if(i->second>1)
                count+=(i->second-1);
        }
        cout<<count<<endl;
    }
    
    return 0;
}