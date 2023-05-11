#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <limits.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n][n], i, j;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int flag = 1;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j && a[i][j] != 1)
            {
                flag = 0;
                break;
            }
            else if(i!=j && a[i][j]!=0)
            {
                flag = 0;
                break;            
            }
        }
        if(flag==0)
            break;
    }

    if(flag==1)
        printf("YES");
    else
        printf("NO");
    

    return 0;
}