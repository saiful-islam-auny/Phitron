#include<stdio.h>
int main()
{
    int x=100;
    int * ptr = &x;

    *ptr=300; //dereferencing
    int *ptr2=ptr; //dereferencing
    *ptr2 = 200;
    // x -> *ptr same 

    printf("x er address - %p\n",&x);
    printf("ptr er value - %p\n",ptr);
    printf("ptr er address - %p\n",&ptr);
    printf("x er value - %d\n",x);
    printf("*ptr er value - %d\n",*ptr);
    printf("*ptr2 er value - %d\n",*ptr2);
    return 0;
}