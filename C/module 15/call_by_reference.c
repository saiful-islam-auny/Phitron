#include<stdio.h>
void fun(int *y)    //y is a pointer that recieved x address
{
    *y=20;  //dereferencing to access and modify the value stored in the memory location pointed to by the pointer y.
}
int main()
{
    int x=10;
    fun(&x);
    printf("main er x er value - %d\n",x);
    return 0;
}