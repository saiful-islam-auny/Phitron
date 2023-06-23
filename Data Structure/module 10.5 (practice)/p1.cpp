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

void print_reverse(Node *tail)
{
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->previous;
    }
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

        input_doubly_node(head, tail, val);
    }
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;

        input_doubly_node(head2, tail2, val);
    }

    if (size(head) != size(head2))
    {
        cout << "NO";
    }
    else
    {
        bool flag = true;
        Node *temp = head;
        Node *temp2 = head2;

        while (temp != NULL)
        {
            if (temp->val != temp2->val)
            {
                flag = false;
                break;
            }
            temp = temp->next;
            temp2 = temp2->next;
        }
        if (flag == true)
            cout << "YES";
        else
            cout << "NO";
    }

    // print_normal(head);
    // cout << endl;
    // print_reverse(tail);

    // cout << endl
    //      << endl;

    // print_normal(head2);
    // cout << endl;
    // print_reverse(tail2);

    return 0;
}