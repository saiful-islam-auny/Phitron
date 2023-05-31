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

    human max;
    max.age=INT_MIN;

    for (int i = 0; i < 3; i++)
    {
        if(a[i].age>max.age)
        {
            max = a[i];
        }
    }

    cout<<max.name<<" "<<max.age;
    
    
    
    return 0;
}