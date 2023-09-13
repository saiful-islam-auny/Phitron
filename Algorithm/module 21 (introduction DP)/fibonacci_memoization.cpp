#include <bits/stdc++.h>

using namespace std;
#define ll long long
const ll N = 1e5 + 10;
ll memo[N];

ll fibo(ll n)
{
    if (n == 0 || n == 1)
        return 1;
    if (memo[n] != -1)
        return memo[n];

    ll ans1 = fibo(n - 1);
    ll ans2 = fibo(n - 2);
    memo[n] = ans1 + ans2;
    return memo[n];
}

int main()
{
    ll n;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        memo[i] = -1;
    }

    fibo(n);
    for (int i=0; i<=n; i++)
    {
        cout<<memo[i]<<" ";
    }
    
    return 0;
}