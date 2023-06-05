#include <bits/stdc++.h>

using namespace std;

class students
{
public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks, eng_marks, sum;

    void GetData()
    {
        cin >> nm;
        cin >> cls;
        cin >> s;
        cin >> id;
        cin >> math_marks;
        cin >> eng_marks;
        sum = math_marks + eng_marks;
    }

    void ShowData()
    {
        cout << nm << " " << cls << " " << s << " " << id << " " << math_marks << " " << eng_marks << endl;
    }
};

bool cmp(students a, students b)
{
    if (a.sum > b.sum)
        return true;
    else if (a.sum == b.sum)
    {
        if (a.id < b.id)
            return true;
        else
            return false;
    }
    else
        return false;
}
int main()
{
    int n;
    cin >> n;

    students stu[n];

    for (int i = 0; i < n; i++)
    {
        stu[i].GetData();
    }
    sort(stu,stu+n,cmp);
    
    for (int i = 0; i < n; i++)
    {
        stu[i].ShowData();
    }

    return 0;
}