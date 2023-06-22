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

void insert_node(Node *head, int pos, int val)
{
    Node *NewNode = new Node(val);

    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    NewNode->next = temp->next;
    temp->next = NewNode;
    NewNode->next->previous = NewNode;
    NewNode->previous = temp;
}

void insert_head(Node *&head, Node *&tail, int val)
{
    Node *NewNode = new Node(val);
    if (head == NULL)
    {
        head = NewNode;
        tail = NewNode;
        return;
    }

    NewNode->next = head;
    head->previous = NewNode;
    head = NewNode;
}

void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *NewNode = new Node(val);
    if (tail == NULL)
    {
        head = NewNode;
        tail = NewNode;
        return;
    }
    tail->next = NewNode;
    NewNode->previous = tail;
    tail = NewNode;
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

    int pos, val;
    cin >> pos >> val;
    if(pos>size(head))
    {
        cout<<"invalid position"<<endl;
    }
    else if (pos == 0)
    {
        insert_head(head, tail, val);
    }
    else if(pos==size(head))
    {
        insert_tail(head,tail,val);
    }
    else
        insert_node(head, pos, val);

    print_normal(head);
    cout << endl;
    print_reverse(tail);

    return 0;
}