#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{
    char s[1001];
    scanf("%s",&s);
    int i=0, j=strlen(s)-1;

    while (i<=j)
    {
        if(s[i]!=s[j])
        {
            break;
        }
        i++;
        j--;
    }
    if(i>j)
        printf("YES");
    else
        printf("NO");
    return 0;
}