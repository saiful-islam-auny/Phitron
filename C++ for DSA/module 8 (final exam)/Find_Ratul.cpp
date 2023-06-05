#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s,word;
    getline(cin,s);

    stringstream ss(s);
    int flag = 0;
    while (ss>>word)
    {
        if(word=="Ratul")
        {
            flag =1;
            break;
        }
    }

    if(flag==1)
        cout<<"YES";
    else
        cout<<"NO";
    
    return 0;
}