#include <bits/stdc++.h>

using namespace std;

class animal
{
public:
    char name[10];
    int age;

    animal(char *ani_name, int ani_age)
    {
        strcpy(name, ani_name);
        age = ani_age;
    }

    void print_details()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main()
{
    animal lion ("lion", 15);    //stack memory
    animal *tiger = new animal ("tiger", 7);    //dinamic/heap memory

    lion.print_details(); //in stack memory we can access using .
    tiger->print_details(); //in heap memory then to access must use -> insted of .

    delete tiger;   //tiegr is deleted from heap memory

    return 0;
}