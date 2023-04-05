#include <stdio.h>

int main()
{
    char situation;
    printf("Is it raining? Y or N: ");
    scanf("%c",&situation);

    if(situation == 'n' || situation == 'N')
    {
        printf("I will go to play on Asif house.\n Is asif in home? Y or N: ");
        scanf(" %c",&situation);

        if(situation == 'y' || situation == 'Y')
        {
            printf("Ammu i'm going to asif house!");
        }
        else
        {
            printf("Ammu i'm going to roof!");
        }
    }
    else
    {
        printf("Ammu, Please make Khicuri!");
    }
    return 0;
}