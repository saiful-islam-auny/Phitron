#include <stdio.h>
int main()
{
    // declare 2d array
    int x, y;
    scanf("%d %d", &x, &y);
    int a[x][y], i, j;

    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int count = 0;
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            if (a[i][j] == 0)
                count++;
        }
    }

    if (x * y == count)
    {
        printf("zero matrix");
    }
    else
        printf("not zero matrix");
    return 0;
}