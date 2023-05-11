#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <limits.h>
#include <math.h>

int main()
{
    int t,w,h,i;
    scanf("%d",&t);

    for ( i = 0; i < t; i++)
    {
        scanf("%d %d",&w,&h);
        if(w==h)
            printf("Square\n");
        else
            printf("Rectangle\n");
    }
    

    return 0;
}