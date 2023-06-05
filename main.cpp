#include <bits/stdc++.h>

using namespace std;

class CustomSort    //cammel case
{
    public:
    char c;
    int cnt;
};

bool cmp(CustomSort a, CustomSort b)    //sorting function
{
    if(a.cnt>b.cnt) return true;
    else
        return false;
}

int main()
{
    CustomSort frq[26];

    for (int i = 0; i < 26; i++)
    {
        frq[i].c = i+'a';
        frq[i].cnt = 0;
    }

    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        char c;
        cin>>c;
        frq[c-'a'].cnt++;
    }

    sort(frq, frq+26,cmp);
    char alp;
    for (int i = 0; i < 26; i++)
    {
        if(frq[i].cnt>0)
        {
            for (int j = 0; j < frq[i].cnt; j++)
            {
                alp = i+'a';
                cout<<alp;
            }
            
        }
    }
    
    
    return 0;
}