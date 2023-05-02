#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <limits.h>
#include <math.h>

char cap_to_small(char c)
{
    return c+32;
}

int main()
{   
    char c;
    scanf("%c",&c);

    c = cap_to_small(c);
    printf("%c",c);

    return 0;
}