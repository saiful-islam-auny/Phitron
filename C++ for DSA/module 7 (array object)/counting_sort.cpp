#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, cnt[26]={0};
    char alp;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        char c;
        cin>>c;
        cnt[c-'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if(cnt[i]>0)
        {
            alp = i+'a';
            for (int j = 0; j < cnt[i]; j++)
            {
                cout<<alp;
            }
        }
    }

    // for (char i = 'a'; i < 'z'; i++)
    // {
    //     if(cnt[i-'a']>0)
    //     {
    //         for (int j = 0; j < cnt[i-'a']; j++)
    //         {
    //             cout<<i;
    //         }
    //     }
    // }
    
    
    return 0;
}