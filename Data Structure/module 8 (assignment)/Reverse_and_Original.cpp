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

void tail_insert(Node *&head, Node *&tail, Node *&head_cpy, Node *&tail_cpy, int val)
{
    Node *NewNOde = new Node(val);
    if (head == NULL)
    {
        head = NewNOde;
        head_cpy = head;
        tail = NewNOde;
        tail_cpy = tail;
    }
    else
    {
        tail->next = NewNOde;
        tail_cpy->next = NewNOde;
        tail = NewNOde;
        tail_cpy = NewNOde;
    }
}

void reverse_list(Node *n)
{
    if (n == NULL)
        return;
    reverse_list(n->next);
    cout << n->val << " ";
}

void print_list(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    Node *head_cpy = NULL;
    Node *tail_cpy = NULL;

    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        tail_insert(head, tail, head_cpy, tail_cpy, val);
    }

    reverse_list(head_cpy);
    cout<<endl;
    print_list(head);

    return 0;
}