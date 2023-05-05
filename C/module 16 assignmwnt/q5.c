#include <stdio.h>
#include <string.h>

int is_palindrome(char s[])
{
    int i = 0, j = strlen(s) - 1, flag = 1;
    while (i < j)
    {
        if (s[i]!=s[j])
        {
            flag = 0;
            break;
        }
        i++;
        j--;
    }

    return flag;
}

int main()
{
    char s[11];
    scanf("%s", s);

    if (is_palindrome(s))
    {
        printf("Palindrome");
    }
    else
        printf("Not Palindrome");

    return 0;
}