#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{
    char a[100],b[100];
    scanf("%s %s",a,b);

    int i,j;
    for ( i = 0; ; i++) //infinity loop
    {
        if(a[i]<b[i])
        {
            printf("a is lexicographically smaller than b");
            break;
        }
        else if(b[i]<a[i])
        {
            printf("b is lexicographically smaller than a");
            break;
        }

        if(a[i]=='\0' && b[i]=='\0')
        {
            printf("Boath are equal");
            break;
        }

        else if(a[i]=='\0')
        {
            printf("a is lexicographically smaller than b");
            break;           
        }
        else if(b[i]=='\0')
        {
            printf("b is lexicographically smaller than a");
            break;           
        }
    }
    
    return 0;
}