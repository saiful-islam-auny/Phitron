#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <limits.h>
#include <math.h>

void summation(int a[][100], int b[][100], int x[][100], int r, int c)
{
    int i,j;

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            x[i][j] = a[i][j]+b[i][j];
        }
    }
    
}

int main()
{
    int r, c, i, j;
    scanf("%d %d", &r, &c);
    int a[100][100], b[100][100], x[100][100];

    for (i = 0; i < r; i++) // array a
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < r; i++) // array b
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    summation(a, b, x, r, c);

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ",x[i][j]);
        }
        printf("\n");
    }

    return 0;
}