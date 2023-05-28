#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b;
    char s;
    cin>>a>>s>>b;

    switch (s)
    {
    case '>':
        if(a>b)
            cout<<"Right";
        else
            cout<<"Wrong";
        break;
    case '<':
        if(a<b)
            cout<<"Right";
        else
            cout<<"Wrong";
        break;
    
    default:
        if(a==b)
            cout<<"Right";
        else
            cout<<"Wrong";
        break;
    }
    return 0;
}