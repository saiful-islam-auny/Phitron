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

void insert_tail(Node* &head, int val)
{
    Node* NewNode = new Node(val); 

    if(head==NULL)
    {
        head = NewNode;
        return;
    }
    else
    {
        Node* temp = head;
        while(temp->next!=NULL)
        {
            temp = temp->next;
        }
        temp->next = NewNode;
    }
}

void print_linked(Node* head)
{
    Node* temp = head;

    cout<<"Linked list: ";
    while (temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl<<endl;
    
}

int main()
{

    Node *head = NULL;

    while (true)
    {
        int n;
        cout << "1. Insert in tail" << endl;
        cout << "2. Print linked list" << endl;
        cout << "3. End operation" << endl;
        cin >> n;

        if (n == 1)
        {
            cout<<"Enter value to insert: ";
            int val;
            cin >> val;
            insert_tail(head, val);
        }

        else if (n == 2)
        {
            print_linked(head);
        }

        else if (n == 3)
        {
            cout<<"\n*** Operataion End ***"<<endl;
            break;
        }
    }

    return 0;
}