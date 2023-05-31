#include <bits/stdc++.h>

using namespace std;

class human
{
public:
    int age;
    string name;

    void get_data()
    {
        getline(cin,name);
        cin>>age;
        // this->age = age;
    }
    void show_data()
    {
        cout<<name<<" "<<age<<endl;
    }

};

int main()
{
    human a[3];
    for (int i = 0; i < 3; i++)
    {
        a[i].get_data();
        cin.ignore();
    }

    for (int i = 0; i < 3; i++)
    {
        a[i].show_data();
    }
    
    
    return 0;
}