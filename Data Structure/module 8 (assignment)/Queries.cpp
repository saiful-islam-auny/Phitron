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

void head_tail(Node *&head, Node *&tail, int pos, int val)
{
    Node *NewNOde = new Node(val);
    if (head == NULL)
    {
        head = NewNOde;
        tail = NewNOde;
    }

    if (pos == 0)
    {
        NewNOde->next = head;
        head = NewNOde;
    }
    else if (pos == 1)
    {
        tail->next = NewNOde;
        tail = NewNOde;
    }

    cout << head->val << " " << tail->val << endl;
}


int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int q;
    cin >> q;

    while (q--)
    {
        int val, pos;
        cin >> pos >> val;
        head_tail(head, tail, pos, val);
    }

    return 0;
}