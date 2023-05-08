#include <stdio.h>
int main()
{
    // declare 2d arraclm
    int row, clm, flag = 1;
    scanf("%d %d", &row, &clm);
    int a[row][clm], i, j;

    if (row == clm)
    {
        for (i = 0; i < row; i++)
        {
            for (j = 0; j < clm; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }

        for (i = 0; i < row; i++)
        {
            for (j = 0; j < clm; j++)
            {
                if (i+j!=row-1 && a[i][j] != 0)
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
            printf("secondary diagonal");
        }
        else
        {
            printf("Not secondary diagonal");
        }
    }
    else
        printf("Not diagonal");

    return 0;
}