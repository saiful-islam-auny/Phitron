#include <stdio.h>

int main()
{
    int n=0;
    while(n!=1999)
    {
        scanf("%d",&n);
        if(n==1999)
            break;
        printf("Wrong\n");
    }
    printf("Correct");

    return 0;
}