#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
        string name;
        int age;
        int marks1;
        int marks2;
        
        void get_info(string nm,int ag,int m1,int m2)
        {
            name=nm;
            age=ag;
            marks1=m1;
            marks2=m2;
        }
        void show_info()
        {
            cout<<name<< " " <<age<<endl;
        }

        int total_marks()
        {
            return marks1+marks2;   // return marks
        }
};
int main()
{
    Person saiful;
    saiful.get_info("Saiful islam",24,95,85);
    saiful.show_info();
    cout<<saiful.total_marks(); //print mark that's gets from returs

    return 0;
}