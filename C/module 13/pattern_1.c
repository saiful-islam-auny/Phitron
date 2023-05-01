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

    // for ( i = 1; i <= n; i++)   //up
    // {
    //     for ( j = 1; j <= i; j++)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }
    
    // for ( i = 1; i <= n-1; i++)   //down
    // {
    //     for ( j = 1; j <= n-i; j++)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }


    for ( i = 0; i < n; i++)   //HW
    {
        for ( j = 1; j <= n-i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}