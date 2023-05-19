#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <limits.h>
#include <math.h>

int main()
{
    int t, n, s, i, j;
    scanf("%d", &t);

    for (i = 1; i <= t; i++)
    {
        scanf("%d", &n);
        int a[n], flag = 0;

        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[j]);
        }
        scanf("%d", &s);

        for (j = 0; j < n; j++)
        {
            if (a[j] == s)
            {
                flag = 1;
                break;
            }
        }
        if(flag==1)
        {
            printf("Case %d: %d\n", i, j + 1);
        }
        else
            printf("Case %d: Not Found\n",i);

    }

    return 0;
}