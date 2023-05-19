#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <limits.h>
#include <math.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    int mid = (n/2)+1;

    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <= n; j++)
        {
            if(i==mid || j==mid)
                printf("#");
            else
                printf("*");
        }
        printf("\n");
        
    }
    

    return 0;
}