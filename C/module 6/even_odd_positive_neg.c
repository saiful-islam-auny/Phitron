#include <stdio.h>

int main()
{
    int i, t, nn, e = 0, o = 0, n = 0, p = 0;
    scanf("%d", &nn);

    for (i = 1; i <= nn; i++)
    {
        scanf("%d", &t);
        if (t % 2 == 0)
        {
            e++;
            if (t > 0)
            {
                p++;
            }
            else if(t==0)
                continue;
            else
                n++;
        }
        else
        {
            o++;
            if (t > 0)
            {
                p++;
            }
            else
                n++;
        }
    }

    printf("Even: %d\n",e);
    printf("Odd: %d\n",o);
    printf("Positive: %d\n",p);
    printf("Negative: %d\n",n);

return 0;

}