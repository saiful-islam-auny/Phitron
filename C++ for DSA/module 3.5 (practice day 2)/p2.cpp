#include <bits/stdc++.h>

using namespace std;

class cricketer
{
public:
    int jearsy_no;
    char country[10];

    void fill_data(int j, char *c)
    {
        jearsy_no = j;
        strcpy(country, c);
    }


};

int main()
{
    cricketer *dhoni = new cricketer;
    cricketer *kohli = new cricketer;
    dhoni->fill_data(7, "india");

    *kohli = *dhoni;
    // kohli->jearsy_no = dhoni->jearsy_no;
    // strcpy(kohli->country,dhoni->country);

    delete dhoni;

    cout << dhoni->jearsy_no << endl;
    cout << dhoni->country << endl;
    cout << kohli->jearsy_no << endl;
    cout << kohli->country << endl;


    return 0;
}