#include <bits/stdc++.h>

using namespace std;
//                0   1  2  3  4  5  6   7
int parent[8] = {-1, -1, 1, 1, 6, 4, -1, -1};

int find(int n)
{
    while(parent[n]!=-1)
    {
        n = parent[n];
    }
    return n;
}

int main()
{
    int n;
    cin>>n;
    cout<<"Leader of "<<n<<" : "<<find(n);
    return 0;
}