#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) // O(N) x Log(N) = N Log(N);
    {
        int x;
        cin >> x;
        v.push_back(x);
        int cur_idx = v.size() - 1;

        while (cur_idx != 0)    //N log(N)
        {
            int par_idx = (cur_idx - 1) / 2;
            if (v[cur_idx] > v[par_idx])
            {
                swap(v[cur_idx],v[par_idx]);
                cur_idx = par_idx;
            }
            else
                break;
        }

        for(int ele : v)
        {
            cout<<ele<<" ";
        }
        cout<<endl;
    }

    return 0;
}