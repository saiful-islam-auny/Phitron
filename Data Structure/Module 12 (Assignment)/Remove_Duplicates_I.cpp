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

void tail_insert(Node *&head, Node *&tail, int val)
{
    Node *NewNOde = new Node(val);
    if (head == NULL)
    {
        head = NewNOde;
        tail = NewNOde;
        return;
    }

    tail->next = NewNOde;
    tail = NewNOde;
}

void ascending_sort(Node *head)
{
    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->val > j->val)
            {
                swap(i->val, j->val);
            }
        }
    }
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

void remove_dublicate(Node *head)
{
    if (head == NULL)
        return;
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        if (tmp->val == tmp->next->val)
        {
            Node *dlt = tmp->next;
            tmp->next = tmp->next->next;
            delete dlt;
        }
        else
        {
            tmp = tmp->next;
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
        tail_insert(head, tail, val);
    }

    ascending_sort(head);
    remove_dublicate(head);
    print_list(head);

    return 0;
}