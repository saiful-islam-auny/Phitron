#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <limits.h>
#include <math.h>

void digits_of_num(int n)
{
    if(n==0) return;
    digits_of_num(n/10);
    printf("%d ",n%10);
}

int main()
{
    int t,n,i;
    scanf("%d",&t);

    for ( i = 0; i < t; i++)
    {
        scanf("%d",&n);
        digits_of_num(n);
        if(n==0)
            printf("0");
        printf("\n");
    }
    

    return 0;
}