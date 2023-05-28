#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n;
    cin>>t;

    for (int i = 0; i < t; i++)
    {
        cin>>n;
        int a[n], min = INT_MAX, sum;

        for (int j = 1; j <=n; j++)
        {
            cin>>a[j];
        }
        
        
        for (int j = 1; j <= n-1; j++)
        {
            for (int k = j+1; k <=n; k++)
            {
                sum = (a[j]+a[k])+(k-j);
                // cout<<sum<<endl;
                if(sum<min)
                    min = sum;
            }
        }
        cout<<min<<endl;

    }
    
    return 0;
}