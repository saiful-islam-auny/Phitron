#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a==0)
        cout<<"No"<<endl;
    else if(a==b && b==c)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}