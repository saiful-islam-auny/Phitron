#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int pos;
    Node *next;
    Node *previous;

    Node(int pos)
    {
        this->pos = pos;
        this->next = NULL;
        this->previous = NULL;
    }
};

void input_any_position(Node *head, int pos, int val)
{
    Node *NewNode = new Node(val);
    Node *temp = head;

    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    NewNode->next = temp->next;
    temp->next = NewNode;
    NewNode->next->previous = NewNode;
    NewNode->previous = temp;
}

void input_head(Node *&head, Node *&tail, int val)
{
    Node *NewNode = new Node(val);
    if (head == NULL)
    {
        head = NewNode;
        tail = NewNode;
        return;
    }
    NewNode->next = head;
    head->previous = NewNode;
    head = NewNode;
}
void input_tail(Node *&tail, int val)
{
    Node *NewNode = new Node(val);

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
        cout << temp->pos << " ";
        temp = temp->next;
    }
}

void print_reverse(Node *tail)
{
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->pos << " ";
        temp = temp->previous;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int q;
    cin >> q;

    while (q--)
    {
        int pos, val;
        cin >> pos >> val;

        if (pos == 0)
        {
            input_head(head, tail, val);
            print_normal(head);
            cout<<endl;
            print_reverse(tail);
            cout << endl;
        }
        else if (pos == size(head))
        {
            input_tail(tail,val);
            print_normal(head);
            cout<<endl;
            print_reverse(tail);
            cout << endl;
        }
        else if (pos < size(head))
        {
            input_any_position(head, pos, val);
            print_normal(head);
            cout<<endl;
            print_reverse(tail);
            cout << endl;
        }
        else
            cout << "Invalid"<<endl;
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