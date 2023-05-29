#include <bits/stdc++.h>

using namespace std;

void print(stringstream& ss)
{
    string word;
    if(ss>>word)    //group theke word ber hocche kina
    {
        print(ss);
        cout<<word<<endl;
    }
}

int main()
{
    string s, word;
    getline(cin,s);

    stringstream ss(s);
    print(ss);

    return 0;
}