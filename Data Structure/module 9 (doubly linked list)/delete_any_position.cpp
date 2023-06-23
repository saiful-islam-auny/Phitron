#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *previous;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->previous = NULL;
    }
};

void print_normal(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

void print_reverse(Node *tail)
{
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->previous;
    }
}

void delete_at_position(Node *head, int pos)
{
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    Node *delnode = temp->next;
    temp->next = temp->next->next;
    temp->next->previous = temp;
    delete delnode;
}

int size(Node *head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void delete_head(Node *&head, Node *&tail)
{
    Node *delehead = head;
    head = head->next;
    delete delehead;
    
    if (head == NULL)
    {
        tail = NULL;
        return;
    }

    head->previous = NULL;
}

void delete_tail(Node *&tail)
{
    Node *deletail = tail;
    tail = tail->previous;
    tail->next = NULL;
    delete deletail;
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *tail = c;

    head->next = a;
    a->previous = head;
    a->next = b;
    b->previous = a;
    b->next = c;
    c->previous = b;


    while (true)
    {
        int pos;
        cin >> pos;

        if (pos >= size(head))
        {
            cout << "invalid position" << endl;
        }
        else if (pos == 0)
        {
            delete_head(head,tail);
        }
        else if (pos == size(head) - 1)
        {
            delete_tail(tail);
        }
        else
            delete_at_position(head, pos);

        print_normal(head);
        cout << endl;
        // print_reverse(tail);
    }

    return 0;
}