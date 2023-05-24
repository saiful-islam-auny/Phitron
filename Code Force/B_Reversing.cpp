#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    for (int i = 0; i < n; i++)
    {
        if(a[i]==0)
        {
            int s = 0, e=i-1;
            while(s<e)
            {
                swap(a[s],a[e]);
                s++;
                e--;

            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    
    
    return 0;
}