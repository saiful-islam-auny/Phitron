#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <limits.h>
#include <math.h>

int sub()
{
    int a ,b,s;
    scanf("%d %d",&a,&b);
    s = a-b;
    return s;
}

int main()
{
    int result = sub();
    printf("%d",result);
    return 0;
}