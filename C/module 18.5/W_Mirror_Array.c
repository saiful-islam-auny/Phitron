#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <limits.h>
#include <math.h>

int main()
{
    int n,m,i,j;
    scanf("%d %d",&n,&m);
    int a[100][100];

    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < m; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for ( i = 0; i < n; i++)
    {
        for ( j = m-1; j >=0; j--)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}