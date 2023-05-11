#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <limits.h>
#include <math.h>

int main()
{
    char s[1001];
    scanf("%s",s);
    int i=0,j=strlen(s)-1,flag=1;
    // printf("%d",strlen(s));
    while (i<j)
    {
        if(s[i]!=s[j])
        {
            flag = 0;
            break;
        }
        i++;
        j--;
    }
    if(flag==1)
        printf("YES");
    else
        printf("NO");
    

    return 0;
}