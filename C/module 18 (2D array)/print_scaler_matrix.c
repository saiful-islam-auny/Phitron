#include <stdio.h>
int main()
{
    // declare 2d array
    int x, y, flag = 1,v;
    scanf("%d %d %d", &x, &y, &v);
    int a[x][y], i, j;

    if (x == y)
    {
        for (i = 0; i < x; i++)
        {
            for (j = 0; j < y; j++)
            {
                if(i==j || i+j==x-1)
                    a[i][j]=v;
                else
                    a[i][j]=0;
            }
        }

        for (i = 0; i < x; i++)
        {
            for (j = 0; j < y; j++)
            {
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }
    }
    else
        printf("Not diagonal");

    return 0;
}