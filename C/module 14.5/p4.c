#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <limits.h>
#include <math.h>

char small_to_cap(char c)
{
    return c-32;
}

int main()
{   
    char c;
    scanf("%c",&c);

    c = small_to_cap(c);
    printf("%c",c);

    return 0;
}