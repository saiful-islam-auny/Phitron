#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <limits.h>
#include <math.h>

int main()
{
    int n, i, j, tmp;
    scanf("%d", &n);
    int a[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n - 1; i++) // ascending order
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[i])
            {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }

    // for(i =0; i<n-1; i++)   //descending order
    // {
    //     for ( j = i+1; j < n; j++)
    //     {
    //         if(a[j]>a[i])
    //         {
    //             tmp = a[i];
    //             a[i] = a[j];
    //             a[j] = tmp;
    //         }
    //     }
    // }

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}