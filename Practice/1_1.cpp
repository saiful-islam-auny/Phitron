#include <bits/stdc++.h>

using namespace std;

int *fun(int n)
{
    int *a = new int[n];
    
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    return a;
    
}

int main()
{
    int n;
    cin>>n;
    int *a=fun(n);

    for (int i = n-1; i >= 0; i--)
    {
        cout<<a[i]<<" ";
    }
    // delete[] a;
    // cout<<endl;
    // for (int i = n-1; i >= 0; i--)
    // {
    //     cout<<a[i]<<" ";
    // }
    
    return 0;
}