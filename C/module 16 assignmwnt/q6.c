// #include <stdio.h>
// #include <stdlib.h>

// int call_by_value(int a,int b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }

// int main()
// {
//     int a=1,b=2;
//     printf("%d %d\n",a,b); //before fuyunction call
//     call_by_value(a,b);
//     printf("%d %d",a,b); //after fucntion call
//     return 0;
// }


#include <stdio.h>
#include <stdlib.h>

int call_by_reference(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a=1,b=2;
    printf("%d %d\n",a,b); //before fuyunction call
    call_by_reference(&a,&b);
    printf("%d %d",a,b); //after fucntion call
    return 0;
}