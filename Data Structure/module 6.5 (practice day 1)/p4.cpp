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
    cout << endl;
}

void insert_head(Node *&head, Node *&tail, int val)
{
    Node *NewNode = new Node(val);
    NewNode->next = head;
    head = NewNode;

    print_list(head);
}

void insert_position(Node *head, int pos, int val)
{

    Node *newnode = new Node(val);
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
        if (temp == NULL)
        {
            cout << "Invalid" << endl;
            return;
        }
    }
    newnode->next = temp->next;
    temp->next = newnode;

    print_list(head);
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
        tail_insert(head, tail, val);
    }

    int q;
    cin >> q;
    while (q--)
    {
        int val, pos;
        cin >> pos >> val;
        if(pos==0)
        {
            insert_head(head,tail,val);
        }
        else
        insert_position(head, pos, val);
    }
    return 0;
}