#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <limits.h>
#include <math.h>

int my_len(char s[])
{
    int i = 0;
    while(s[i]!='\0')
    {
        i++;
    }
    return i;
}

int main()
{
    char s[100];
    scanf("%s",&s);
    printf("%d",my_len(s));

    return 0;
}