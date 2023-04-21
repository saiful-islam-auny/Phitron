#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{
    char a[100];
    int alpha[26] = {0};
    int i, j;
    scanf("%s", a);

    for (i = 0; i < strlen(a); i++)
    {
        int value = a[i] - 97;
        alpha[value]++;
    }

    for (i = 0; i < 26; i++)
    {
        if (alpha[i] != 0)
        {
            printf("%c :%d\n", i + 97, alpha[i]);
        }
    }

    return 0;
}