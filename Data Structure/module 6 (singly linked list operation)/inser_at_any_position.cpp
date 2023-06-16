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
        cout<<"Head inserted"<<endl;
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
        cout<<"Tail inserted"<<endl;

    }
}

void insert_any_pos(Node* head,int pos, int v)
{
    Node* NewNode = new Node(v);
    Node* temp = head;

    for (int i = 1; i <= pos-1 ; i++)
    {
        temp= temp->next;
    }
    NewNode->next=temp->next;
    temp->next = NewNode;

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
        cout << "2. Insert at any position: " << endl;
        cout << "3. Print linked list" << endl;
        cout << "4. End operation" << endl;
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
            int pos,v;
            cout<<"Enter position: ";
            cin>>pos;
            cout<<"Enter value: ";
            cin>>v;
            insert_any_pos(head,pos,v);
        }

        else if (n == 3)
        {
            print_linked(head);
        }

        else if (n == 4)
        {
            cout<<"\n*** Operataion End ***"<<endl;
            break;
        }
    }

    return 0;
}