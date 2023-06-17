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

int size(Node* head)
{
    int count=0;
    Node* temp = head;
    while(temp!=NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void print_mid(Node* head)
{
    Node* temp = head;

    for (int i = 1; i <= (size(head)/2)-1; i++)
    {
        temp= temp->next;
    }
    if(size(head)%2!=0)
    {
        cout<<temp->next->val;
    }
    else
        cout<<temp->val<<" "<<temp->next->val;
    
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
    
    print_mid(head);


    return 0;
}