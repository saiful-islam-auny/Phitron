#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <limits.h>
#include <math.h>

int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d", sum(x, y));

    return 0;
}