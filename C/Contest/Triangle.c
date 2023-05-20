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

    if(a!=b || b!=c || a==0 && a==b && b==c)
        printf("No");
    else
        printf("Yes");

    return 0;
}