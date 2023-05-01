#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <limits.h>
#include <math.h>

int sum(int a, int b)
{
    return a+b;
}

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int s = sum(a,b);
    printf("%d",s);

    return 0;
}