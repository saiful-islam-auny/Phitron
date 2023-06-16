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


void head_insert(Node *&head, Node *&tail, int val) // O(1)
{
    Node *NewNOde = new Node(val);
    if (head == NULL)
    {
        head = NewNOde;
        tail = NewNOde;
    }

    NewNOde->next = head;
    head = NewNOde; // we used & reference because NewNode direct assigning on head
    cout<<"Head inserted"<<endl;
}

void tail_insert(Node *&head, Node *&tail, int val) // O(1)
{
    Node *NewNOde = new Node(val);
    if (head == NULL)
    {
        head = NewNOde;
        tail = NewNOde;
    }
    tail->next = NewNOde; // new node linking with tail node
    tail = NewNOde;       // tail updated

    cout<<"Tail inserted"<<endl;
}

void insert_position(Node *head, int pos, int val)
{
    Node *NewNode = new Node(val);
    Node *temp = head; // taking a copy of head in temp wihtout changing head postion

    for (int i = 1; i <= pos - 1; i++) // koto bar move hbe pos er ager index e ashte
    {
        temp = temp->next;
    }
    NewNode->next = temp->next;
    temp->next = NewNode;
    cout << "Inserted " << val << " at postion " << pos << endl;
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

void print(Node *head)
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
    Node *head = new Node(10); // *head is a pointer not object
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *tail = d;

    // 10 20 30 40 50 NULL
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    cout << "Linked list: ";
    print(head);
    cout << "\nEnter Position & Value: ";
    int pos, val;
    cin >> pos >> val;

    if (pos > size(head))
    {
        cout << "Invalid Index" << endl;
    }
    else if (pos == 0)
    {
        head_insert(head, tail, val);
    }
    else if (pos == size(head))
    {
        tail_insert(head, tail, val);
    }
    else
        insert_position(head, pos, val);

    cout << "\nLinked list: ";
    print(head);

    return 0;
}