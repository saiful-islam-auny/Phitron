#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <limits.h>
#include <math.h>

int main()
{
    char s[1005];
    int cap=0,sml=0,sps=0,i;

    fgets(s,1005,stdin);

    for ( i = 0; i < strlen(s); i++)
    {
        if(s[i]>='a' && s[i]<='z')
            sml++;
        else if(s[i]>='A' && s[i]<='Z')
            cap++;
        else if(s[i]==' ')
            sps++;
    }

    printf("Capital - %d\n",cap);
    printf("Small - %d\n",sml);
    printf("Spaces - %d",sps);
    

    return 0;
}