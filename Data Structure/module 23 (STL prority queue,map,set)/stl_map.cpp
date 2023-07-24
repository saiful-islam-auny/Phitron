#include <bits/stdc++.h>

using namespace std;

int main()
{
    map <string, int> mp;
    mp["auny"] = 100;   //O(logN);
    mp["sunny"] = 200;
    mp["jony"] = 300;
    mp["jewel"] = 400;

    cout<<mp["auny"]<<endl;

    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout<< it->first<<" "<<it->second<<endl;    //O(LogN)
    }
    

    return 0;
}