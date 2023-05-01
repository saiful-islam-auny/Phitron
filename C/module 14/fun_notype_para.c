#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <limits.h>
#include <math.h>

void sum(int x,int y)
{
    int s = x+y;
    printf("%d",s);
}

int main()
{
    int a ,b,s;
    scanf("%d %d",&a,&b);
    sum(a,b);

    return 0;
}