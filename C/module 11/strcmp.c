#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{
    char a[100],b[100];
    scanf("%s %s",a,b);
    int cmp = strcmp(a,b);

    if(cmp<0)   // -1
    {
        printf("A is small");
    }
    else if(cmp>0)   // 1
    {
        printf("B is small");
    }
    else    // 0
    {
        printf("both are same");
    }
    
    return 0;
}