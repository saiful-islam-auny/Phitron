#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <limits.h>
#include <math.h>

void swap_it(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);

    swap_it(&a,&b);

    printf("%d %d",a,b);

    return 0;
}