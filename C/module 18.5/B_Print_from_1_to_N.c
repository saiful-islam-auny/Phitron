#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <limits.h>
#include <math.h>

void rec(int n)
{
    if(n==0) return;
    rec(n-1);
    printf("%d\n",n);
}

int main()
{
    int n;
    scanf("%d",&n);
    rec(n);
    return 0;
}