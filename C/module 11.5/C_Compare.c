#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{
    char x[21],y[21];
    scanf("%s %s",x,y);

    if(strcmp(x,y)>0)
    {
        printf("%s",y);
    }
    else if(strcmp(x,y)<0)
    {
        printf("%s",x);
    }
    else
        {
            printf("%s",x);
        }
    
    return 0;
}