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
    Node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
}

void print_reverse(Node *tail)
{
    Node* temp = tail;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->previous;
    }
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
    b->next = tail;
    tail->previous = b;

    print_normal(head);
    cout<<endl;
    print_reverse(tail);

    return 0;
}