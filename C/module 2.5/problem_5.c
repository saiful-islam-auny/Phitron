#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);   
    
    if(n>=10000)
    {
        if(n>20000)
        {
            printf("Gucci Bag\nGucci Belt");
        }
        else
             printf("Gucci Bag");     
    }
    else if(n>=5000)
    {
            printf("Levis Bag");     
    }
    else
    {
            printf("Something");     
    }
    
    return 0;
}