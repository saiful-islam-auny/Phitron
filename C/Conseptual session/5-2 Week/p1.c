#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <limits.h>
#include <math.h>

int main()
{
    char s[5], a,b,d;
    scanf("%s %c %c %c",s,&a,&b,&d);
    int i;

    for ( i = 0; i < 4; i++)
    {
        if(s[i]==a || s[i]==b || s[i]==d)
        {
            continue;
        }
        else
            printf("%c",s[i]);
    }
    

    return 0;
}