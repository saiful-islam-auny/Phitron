#include <stdio.h>

int main()
{
    char a;
    scanf("%c",&a);

    if(a>=65 && a<=122)
    {
        if(a>=65 && a<=89)
        {
            printf("ALPHA\nIS CAPITAL");
        }
        else
            printf("ALPHA\nIS SMALL");
    }
    else
    {
        printf("IS DIGIT");

    }
    return 0;
}