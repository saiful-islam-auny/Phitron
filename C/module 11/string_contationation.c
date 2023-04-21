#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{
    char a[100],b[50];
    scanf("%s %s",a,b);
    int i,k=strlen(a);

    for (i = 0; i <= strlen(b); i++)
    {
        a[k] = b[i];
        k++;
    }

    printf("%s %s",a,b);
    
    return 0;
}