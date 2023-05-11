#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <limits.h>
#include <math.h>

int main()
{
    int n,m;
    scanf("%d %d", &n,&m);
    int a[n][m], i, j;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }


        for (j = 0; j < m; j++)
        {
            printf("%d ", a[n-1][j]);
        }
        printf("\n");

        for (i = 0; i < n; i++)
        {
            printf("%d ", a[i][m-1]);
        }


    return 0;
}