#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <limits.h>
#include <math.h>

int main()
{
    int n, i, j, x;
    printf("Enter array size: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d elements: ", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter x: ");
    scanf("%d", &x);

    int flag = 0;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] == x)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            break;
    }

    if(flag == 1)
    {
        printf("%d + %d = %d",a[i],a[j],x);
    }
    else
    {
        printf("Not possible");
    }

    return 0;
}