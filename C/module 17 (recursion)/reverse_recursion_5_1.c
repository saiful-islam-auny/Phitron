#include<stdio.h>
int fun(int i, int n)
{
    if(i==n+1) return;
    fun(i+1,n);
    printf("%d\n",i);
}
int main()
{
    int n;
    scanf("%d",&n);
    fun(1,n);
    return 0;
}