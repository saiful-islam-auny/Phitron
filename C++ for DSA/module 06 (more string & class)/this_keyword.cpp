#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
        string name;
        int age;
        // Person(string name,int age)
        // {
        //     this->name=name;
        //     this->age=age;
        // }
        void get()
        {
            int age;
            string name;
            getline(cin,name);
            cin>>age;

            this->name = name;
            this->age = age;
        }
        void show()
        {
            cout<<"name: "<<name<<endl;
            cout<<"age: "<<age<<endl;
        }
};
int main()
{
    Person rakib;
    rakib.get();
    rakib.show();
    return 0;
}