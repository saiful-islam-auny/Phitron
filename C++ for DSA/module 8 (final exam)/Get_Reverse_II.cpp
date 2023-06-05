#include <bits/stdc++.h>

using namespace std;

class students
{
public:
    string nm;
    int cls;
    char s;
    int id;

    void GetData()
    {
        cin >> nm;
        cin >> cls;
        cin >> s;
        cin >> id;
    }

    void ShowData()
    {
        cout << nm << " " << cls << " " << s << " " << id<<endl;
    }
};

int main()
{
    int n;
    cin >> n;

    students stu[n];

    for (int i = 0; i < n; i++)
    {
        stu[i].GetData();
    }

    int i = 0, j = n - 1;

    while (i < j)
    {
        swap(stu[i].id,stu[j].id);
        i++;j--;
    }

    for (int i = 0; i < n; i++)
    {
        stu[i].ShowData();
    }
    

    return 0;
}