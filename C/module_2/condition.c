#include <stdio.h>

int main()
{
    int burger=100, have;
    
    scanf("%d",&have);
    if(have>=burger)
    {
        printf("Happy!");
    }
    else
    {
        printf("Sad!");
    }
    return 0;
}