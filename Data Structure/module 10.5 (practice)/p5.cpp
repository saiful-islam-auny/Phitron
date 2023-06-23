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

void input_doubly_node(Node *&head, Node *&tail, int val)
{
    Node *NewNode = new Node(val);
    if (head == NULL)
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

void print_normal(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

void sort(Node *head)
{
    for (Node *i = head; i->next != NULL; i=i->next)
    {
        for (Node* j = i->next; j !=NULL; j=j->next)
        {
            if(i->val>j->val)
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

        input_doubly_node(head, tail, val);
    }
    sort(head);
    print_normal(head);

    return 0;
}