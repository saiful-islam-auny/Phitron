#include <bits/stdc++.h>

using namespace std;

int main()
{
    int roll;
    cout<< "Enter your roll: ";
    cin >> roll;

    if (roll % 3 == 0)
        printf("Chapter: 5,6");
    else if ((roll - 1) % 3 == 0)
        printf("Chapter: 1,2");
    else
        printf("Chapter: 3,4");

    return 0;
}