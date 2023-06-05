#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for (int i = 0; i < t; i++)
    {
        int n,a, count=0; cin>>n;
        for (int j = 0; j < n; j++)
        {
            cin>>a;
            if(a%2==0)
                count++;
        }
        if(n%2==0)
        {
            if(count==n/2)
                cout<<"0"<<endl;
            else
            {
                cout<<abs(count-n/2)<<endl;
            }
        }
        else
            cout<<-1<<endl;
        
    }
    
    return 0;
}