#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <limits.h>
#include <math.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    if(a>0 && b>0 && c>0 && a==b && b==c && c==a)
        printf("Yes");
    else
        printf("No");

    return 0;
}