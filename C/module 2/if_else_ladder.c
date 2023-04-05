#include <stdio.h>

int main()
{
    int money;
    scanf("%d",&money);

    if(money>=100)
    {
        printf("I will eat burger");
    }
    else if(money>=50)
    {
        printf("I will eat sandwich");
    }
    else if(money>=20)
    {
        printf("I will eat ice cream");
    }
    else
        printf("I will eat Nothing!");
    return 0;
}