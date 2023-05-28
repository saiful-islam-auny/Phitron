#include <bits/stdc++.h>

using namespace std;

class student
{
    public:
    char name[30];
    int roll;
    char section;
    int math_mark;
    float cls;

    student(char* n, int r, char s, int m, float c)
    {
        strcpy(name,n);
        roll = r;
        section = s;
        math_mark = m;
        cls = c;
    }
};

int main()
{
    student saiful("saiful islam auny", 21, 'A', 98, 3.1);
    student nitu("Momtaz nitu", 19, 'A', 96, 3.1);
    student mou("Merina mou", 43, 'A', 97, 3.1);

    if(saiful.math_mark>nitu.math_mark && saiful.math_mark>mou.math_mark)
    {
        cout<<saiful.name;
    }
    else if(nitu.math_mark>mou.math_mark)
    {
        cout<<nitu.name;
    }
    else
        cout<<mou.name;
    return 0;
}