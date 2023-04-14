#include <stdio.h>

int main()
{
    long long int e, m, b,min, kat=0;
    scanf("%lld %lld %lld", &e, &m, &b);
    if (e == 0 || b == 0)
        printf("0");
    else
    {
        while (e != 0 || b != 0)
        {
            if(m==0 && e/2<=b)
            {
                kat = kat+ e/2;
                e-=e/2;
                b-=e/2;
            }

            if (e < m && e < b)
                min = e;
            else if (m < e && m < b)
                min = m;
            else
                min = b;
            
            kat = kat+min;
            e-=min;
            m=-min;
            b-=min;

        }
        printf("%d",kat);
    }

    return 0;
}