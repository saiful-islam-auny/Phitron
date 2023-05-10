#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <limits.h>
#include <math.h>

int main()
{
    int n, m, i, j, x, flag=1;
    scanf("%d %d", &n, &m);
    int a[n][m];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    scanf("%d", &x);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (a[i][j] == x)
            {
                flag = 0;
                break;
            }
        }
        if(flag==0)
            break;
    }

    if(flag==1)
     printf("will take number");
    else
     printf("will not take number");

    return 0;
}