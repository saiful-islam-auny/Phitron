#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <limits.h>
#include <math.h>

int main()
{
    int n,x1,x2,i,t=0,p=0;
    scanf("%d",&n);

    for ( i = 0; i < n; i++)
    {
        scanf("%d %d",&x1,&x2);
        if(x1>x2)
            t++;
        else if(x2>x1)
            p++;
        else
            {
                t++;
                p++;
            }
    }

    if(t>p)
        printf("Tiger");
    else if(p>t)
        printf("Pathan");
    else
        printf("Draw");
    

    return 0;
}