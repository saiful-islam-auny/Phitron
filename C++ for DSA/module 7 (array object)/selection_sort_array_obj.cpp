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


    // for (int i = 0; i < 2; i++) //sorting through max age
    // {
    //     for (int j = i+1; j < 3; j++)
    //     {
    //         if(a[i].age<a[j].age)
    //         {
    //             swap(a[i],a[j]);
    //         }
    //     }  
    // }

    for (int i = 0; i < 2; i++) //sorting through min age
    {
        for (int j = i+1; j < 3; j++)
        {
            if(a[i].age>a[j].age)
            {
                swap(a[i],a[j]);
            }
        }  
    }

    for (int i = 0; i < 3; i++)
    {
        cout<<a[i].name<<" "<<a[i].age<<endl;
    }


    
    
    
    return 0;
}