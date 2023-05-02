#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <limits.h>
#include <math.h>

int char_to_ascii(char c)
{
    return c;
}

int main()
{   
    char c;
    scanf("%c",&c);
    int value = char_to_ascii(c);
    printf("%d",value);

    return 0;
}