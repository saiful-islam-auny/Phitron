#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{
    char s[1001];
    int sm=0,cap=0,i;

    scanf("%s",s);
    for ( i = 0; i < strlen(s); i++)
    {
        if(s[i]>=65 && s[i]<=90)
            cap++;
        else
            sm++;
    }
    printf("%d %d",cap,sm);
    return 0;
}