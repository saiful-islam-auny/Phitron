#include <bits/stdc++.h>

using namespace std;

class students
{
public:
    string nm;
    int cls;
    char s;
    int math_marks, eng_marks;

    void GetData()
    {
        cin>>nm;
        cin >> cls;
        cin >> s;
        cin >> math_marks;
        cin >> eng_marks;
    }

    void ShowData()
    {
        cout << nm << " " << cls << " " << s << " " << math_marks << " " << eng_marks << endl;
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

    for (int i = n - 1; i >= 0; i--)
    {
        stu[i].ShowData();
    }

    return 0;
}