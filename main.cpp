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
        return;
    }

    tail->next = NewNOde; // new node linking with tail node
    tail = NewNOde;       // tail updated
}

void swap_in_pos(Node *head, int pos, int length)
{
    Node *temp1 = head;
    Node *temp2 = head;

    for (int i = 1; i <= pos - 1; i++)
    {
        temp1 = temp1->next;
    }
    for (int i = 1; i <= length - pos; i++)
    {
        temp2 = temp2->next;
    }
    swap(temp1->val,temp2->val);
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
    Node *head = NULL;
    Node *tail = NULL;

    int q;
    cin >> q;
    while (q--)
    {
        int val;
        cin >> val;
        tail_insert(head, tail, val);
    }

    int pos, length = size(head);
    cin >> pos;

    swap_in_pos(head, pos, length);

    cout << "Linked list: ";
    print_list(head);

    return 0;
}