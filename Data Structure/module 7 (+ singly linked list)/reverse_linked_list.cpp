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

void reverse_list(Node* n)
{
    if(n==NULL) return;
    reverse_list(n->next);
    cout<<n->val<<" ";
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    while (true)
    {
        int val; cin>>val;
        if(val==-1)
            break;
        tail_insert(head,tail,val);
    }
    
    cout<<"Linked list: ";
    print_list(head);
    cout<<"\nReverse linked list: ";
    reverse_list(head);


    return 0;
}