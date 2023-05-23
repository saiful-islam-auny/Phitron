#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,num,big=INT_MIN;
    cin>>n;
    
    for (int i = 0; i < n; i++)
    {
        cin>>num;
        big = max(num,big);
    }

    cout<<big;
    
    return 0;
}