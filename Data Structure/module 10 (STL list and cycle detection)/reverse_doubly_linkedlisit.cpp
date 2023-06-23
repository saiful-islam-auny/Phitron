#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void take_input_doubly(Node *&head, Node *&tail, int val)
{
    Node *NewNode = new Node(val);
    if (head == NULL)
    {
        head = NewNode;
        tail = NewNode;
        return;
    }
    tail->next = NewNode;
    NewNode->prev = tail;
    tail = NewNode;
}

void print_normal(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void reverse(Node *head, Node *tail)
{
    Node *i = head;
    Node *j = tail;
    while (i != j)
    {
        swap(i->val, j->val);

        if (i->next == j)
            break;
            
        i = i->next;
        j = j->prev;
    }
    // swap(i->val, j->val);
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        take_input_doubly(head, tail, val);
    }

    reverse(head, tail);
    print_normal(head);

    return 0;
}