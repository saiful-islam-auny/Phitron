#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <limits.h>
#include <math.h>

void sorting(int *a)
{
    int i, j, temp;
    for (i = 0; i < 3; i++)
    {
        for (j = i + 1; j < 3; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for (i = 0; i < 3; i++)
    {
        printf("%d\n", a[i]);
    }
    printf("\n");
}

void actual(int *a)
{
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("%d\n", a[i]);
    }
}

int main()
{
    int i, a[3], b[3];
    for (i = 0; i < 3; i++)
    {
        scanf("%d", &a[i]);
        b[i] = a[i];
    }

    sorting(a);
    actual(b);

    return 0;
}