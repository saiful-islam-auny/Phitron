// #include <stdio.h>
// #include <stdlib.h>
// #include <conio.h>
// #include <ctype.h>
// #include <string.h>
// #include <limits.h>
// #include <math.h>

// long long int fact(int n, long long int f)
// {
//     if(n==0) return f;
//     f = f*n;
//     fact(n-1,f);
// }

// int main()
// {
//     int n;
//     scanf("%d",&n);
//     printf("%lld",fact(n,1));

//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <limits.h>
#include <math.h>

long long int fact(int n)
{
    if(n==0) return 1;
    long long int ans = fact(n-1);
    return ans*n;
}

int main()
{
    int n;
    scanf("%d",&n);

    printf("%lld",fact(n));

    return 0;
}