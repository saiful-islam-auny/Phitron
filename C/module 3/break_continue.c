#include <stdio.h>

int main()
{
    int i;

    for(i=1; i<=10; i++)
    {
        if(i==5)
            continue;
        if(i==9)
            break;
        printf("%d\n",i);
    }
    return 0;
}