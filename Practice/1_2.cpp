#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n;

    int *a = new int[n];    //new array a is created in dynamic memory and stored in stack memory in *a

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    cin>>m;

    int *b = new int[m+n];  //new array b is created in dynamic memory size n+m and stored in stack memory in *b

    for (int i = 0; i < m+n; i++)
    {
        b[i] = a[i];
        if(i>=n)
            cin>>b[i];
    }
    
    delete[] a; //deleted array a from memory

    for (int i = 0; i < m+n; i++)   //printing array b
    {
        cout<<b[i]<<" ";
    }

    cout<<endl;
    for (int i = 0; i < n; i++) // printing array a for check
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}