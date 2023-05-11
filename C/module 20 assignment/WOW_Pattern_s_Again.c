#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <limits.h>
#include <math.h>

int main()
{
    int n,i,j,k;
    scanf("%d",&n);

    for ( i = 1; i <= n; i++)
    {
        for ( j =1; j<=n-i ; j++)
        {
            printf(" ");
        }
        for ( k = 1; k <= (i*2)-1; k++)
        {
            if(i%2!=0)
                printf("^");
            else
                printf("*");
        }
        
        printf("\n");
    }
    

    return 0;
}