#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <limits.h>
#include <math.h>

int pri_sum(int a[][100], int n)
{
    int p_sum = 0, i, j;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if(i==j)
                p_sum+=a[i][j];
        }
    }
    return p_sum;
}

int sec_sum(int a[][100], int n)
{
    int s_sum = 0, i, j;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if(i+j==n-1)
                s_sum+=a[i][j];
        }
    }
    return s_sum;
}

int main()
{
    int n, pri, sec, i, j;
    scanf("%d", &n);
    int a[100][100];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    pri = pri_sum(a, n);
    sec = sec_sum(a, n);

    printf("%d\n", abs(pri - sec));

    return 0;
}
