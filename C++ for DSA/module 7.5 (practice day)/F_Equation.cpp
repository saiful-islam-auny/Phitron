#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x,n;
    long long int sum=0;
    cin>>x>>n;
    for (int i = 2; i <= n; i=i+2)
    {
        sum+= pow(x,i);
        // cout<<pow(x,i)<<endl;
    }
    cout<<sum;
    return 0;
}