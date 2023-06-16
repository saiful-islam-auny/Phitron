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

void insert_node(Node *&head, Node *&tail, int val)
{
    Node *NewNode = new Node(val);
    if (head == NULL)
    {
        head = tail = NewNode;
    }
    tail->next = NewNode;
    tail = NewNode;
}

void print_list(Node* head)
{
    Node* temp = head;
    while (temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    
}

void ascending_sort(Node* head)
{
    for (Node* i = head; i->next!=NULL; i=i->next)
    {
        for (Node* j = i->next; j!=NULL; j=j->next)
        {
            if(i->val>j->val)
            {
                swap(i->val,j->val);
            }
        }
        
    } 
}

void descending_sort(Node* head)
{
    for (Node* i = head; i->next!=NULL; i=i->next)
    {
        for (Node* j = i->next; j!=NULL; j=j->next)
        {
            if(i->val<j->val)
            {
                swap(i->val,j->val);
            }
        }
        
    } 
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

        insert_node(head, tail, val);
    }

    // ascending_sort(head);
    descending_sort(head);
    print_list(head);
    return 0;
}