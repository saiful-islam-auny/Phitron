#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    if(a<=b && a<=c)
    {
        if(b>c)
        {
            printf("%d %d",a,b);
        }
        else
        {
             printf("%d %d",a,c);           
        }
    }

    else if(b<=a && b<=c)
    {
        if(a>c)
        {
            printf("%d %d",b,a);
        }
        else
        {
             printf("%d %d",b,c);           
        }
    }
    else
        {
            if(a>b)
            {
                printf("%d %d",c,a);
            }
            else{
                printf("%d %d",c,b);
            }
        }   
    return 0;
}