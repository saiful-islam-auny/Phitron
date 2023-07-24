#include <bits/stdc++.h>

using namespace std;

int main()
{
    string st;
    getline(cin,st);

    string word;
    stringstream ss(st);

    map <string, int> mp;   //count word
    while (ss>>word)
    {
        mp[word]++;
    }

    // map <char, int> mp;  //count letter
    // char c;
    // while (true)
    // {
    //     cin>>c;
    //     if(c=='0')
    //         break;

    //     mp[c]++;
    // }
    
    for (auto i = mp.begin(); i !=mp.end(); i++)
    {
        cout<<i->first<<" "<<i->second<<endl;
    }
    
    
    return 0;
}