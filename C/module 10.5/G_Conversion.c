#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <math.h>

int main()
{
    char a[100001], i, j;
    scanf("%s", a);

    for (i = 0; i < strlen(a); i++)
    {
        if (a[i] == ',')
            a[i] = ' ';

        else if (a[i] >= 65 && a[i] <= 90)
            a[i] = a[i] + 32;

        else if(a[i] >= 90 && a[i] <= 122)
            a[i] = a[i] - 32;
    }

    printf("%s",a);


    return 0;
}