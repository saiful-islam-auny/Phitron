#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

int main()
{
    Node* head = NULL;

    if(head == NULL)
    {
        cout<<"HEAD IS NULL";
    }

    if(head->next == NULL)
    {
        cout<<"NEXT ADDRESS IS NULL";
    }

    return 0;
}