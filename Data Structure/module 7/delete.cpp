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

void DeleteHead(Node *&head)
{
    Node* DelHead= head;
    head = head->next;
    delete DelHead;
    cout<<"Head Deleted"<<endl;
}

void DeleteNode(Node *head, int pos)
{
    Node* temp = head;
    for (int i = 1; i <= pos-1; i++)
    {
        temp = temp->next;
    }
    Node* DeleteNode = temp->next;
    temp->next = temp->next->next;
    delete DeleteNode; 
    
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

    cout<<"\nLinked list: ";
    print(head);

    int pos;
    cout<<"\nEnter position: ";
    cin >> pos;

    if (pos >= size(head))
    {
        cout << "invalid index"<<endl;
    }
    else if (pos == 0)
    {
        DeleteHead(head);
    }
    else
        DeleteNode(head, pos);

    cout<<"\nFinal Linked list: ";
    print(head);

    return 0;
}