#include<stdio.h>
// global
int x=500;
void fun(void)
{
    // printf("fun er x er address - %p\n",&x);
    x = 10;
    printf("fun x er value - %d\n",x);
}
int main()
{
    // printf("Main er x er address - %p\n",&x);

    fun();

    // int y=100,i;
    // for( i=0;i<5;i++)
    // {
    //     int z=100;
    // }
    printf("main er x: %d",x);
    return 0;
}