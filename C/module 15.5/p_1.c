#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <limits.h>
#include <math.h>

int my_abs(int n)
{
    if(n<0)
        return n*-1;
    else
        return n;
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",my_abs(n));

    return 0;
}