#include <bits/stdc++.h>

using namespace std;

void fun(int *&p)
{
    cout <<"p own address: "<< &p << endl;
    cout <<"p value(a address): "<< p << endl;
    p = NULL;   //value will be null which was the address of a
}

int main()
{
    int a = 10;
    int *pt = &a;
    fun(pt);
    cout <<"pt own address: "<< &pt << endl;
    cout <<"pt value: "<< pt << endl;
    // cout << &a << endl;

    return 0;
}