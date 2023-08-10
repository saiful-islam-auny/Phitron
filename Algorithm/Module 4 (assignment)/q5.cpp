#include <iostream>
using namespace std;

void merge(int a1[], int a2[], int a3[], int n, int m)
{
    int i = 0, j = 0, k = 0, i_end = n - 1, j_end = m - 1;

    while (i <= i_end && j <= j_end)
    {
        if (a1[i] > a2[j])
            a3[k++] = a1[i++];

        else
            a3[k++] = a2[j++];
    }

    if(i>i_end)
    {
        while(j<=j_end)
        {
            a3[k++] = a2[j++];
        }
    }
    else
    {
        while(i<=i_end)
        {
            a3[k++] = a1[i++];
        }       
    }
}

int main()
{
    int n;
    cin >> n;
    int a1[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a1[i];
    }

    int m;
    cin >> m;
    int a2[m];
    for (int i = 0; i < m; i++)
    {
        cin >> a2[i];
    }

    int a3[n + m];
    merge(a1, a2, a3, n, m);

    for (int i = 0; i < n + m; i++)
    {
        cout << a3[i] << " ";
    }

    return 0;
}
