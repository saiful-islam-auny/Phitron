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
    }
    tail->next = NewNOde;
    tail = NewNOde;
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

bool check_same_or_not(Node *head, Node *head2)
{
    if (size(head) == size(head2))
    {
        Node *tem1 = head;
        Node *tem2 = head2;

        while (tem1 != NULL)
        {
            if (tem1->val != tem2->val)
            {
                return false;
            }

            tem1 = tem1->next;
            tem2 = tem2->next;
        }
        return true;
    }
    else
        return false;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    Node *head2 = NULL;
    Node *tail2 = NULL;

    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        tail_insert(head, tail, val);
    }
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        tail_insert(head2, tail2, val);
    }

    if(check_same_or_not(head, head2))
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}