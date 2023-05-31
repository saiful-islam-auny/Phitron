#include <bits/stdc++.h>

using namespace std;

class human
{
public:
    int age;
    string name;

    void get_data()
    {
        getline(cin, name);
        cin >> age;
    }

    void show_data()
    {
        cout << name << " " << age << endl;
    }
};

bool cmp(human a, human b)
{
    if(a.age > b.age)
        return true;
    else
        return false;
}

int main()
{
    human a[3];
    for (int i = 0; i < 3; i++)
    {
        a[i].get_data();
        cin.ignore();
    }

    sort(a, a + 3, cmp);    //sort using function

    for (int i = 0; i < 3; i++)
    {
        cout << a[i].name << " " << a[i].age << endl;
    }

    return 0;
}