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

    strcpy(a,b);

    printf("%s %s",a,b);
    return 0;
}