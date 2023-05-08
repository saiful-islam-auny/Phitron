#include <stdio.h>
int main()
{
    // declare 2d array
    int x, y, flag = 1;
    scanf("%d %d", &x, &y);
    int a[x][y], i, j;

    if (x == y)
    {
        for (i = 0; i < x; i++)
        {
            for (j = 0; j < y; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }

        for (i = 0; i < x; i++)
        {
            for (j = 0; j < y; j++)
            {
                if(i==j && a[i][j]!=a[0][0])
                {
                    flag = 0;
                    break;                   
                }
                if (i != j && a[i][j] != 0)
                {
                    flag = 0;
                    break;
                }
            }
            if (flag == 0)
                break;
        }

        if (flag == 1)
        {
            printf("scalar matrix");
        }
        else
        {
            printf("Not scalar matrix");
        }
    }
    else
        printf("Not diagonal");

    return 0;
}