#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    string name;
    Node *next;
    Node *previous;

    Node(string name)
    {
        this->name = name;
        this->next = NULL;
        this->previous = NULL;
    }
};

void take_input_doubly(Node *&head, Node *&tail, string name)
{
    Node *NewNode = new Node(name);
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

void print_normal(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->name << " ";
        temp = temp->next;
    }
}

void print_reverse(Node *tail)
{
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->name << " ";
        temp = temp->previous;
    }
}

int checking_node(Node *head, string check, int pre_pos)
{
    int pos = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        pos++;
        if (temp->name == check)
        {
            cout << temp->name << endl;
            break;
        }
        temp = temp->next;
    }

    if (temp == NULL)
    {
        cout << "Not Available" << endl;
        return pre_pos;
    }
    else
        return pos;
}

int preview(Node *head, int pos)
{
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    if (temp->previous == NULL)
    {
        cout << "Not Available" << endl;
    }
    else
    {
        cout << temp->previous->name << endl;
        pos--;
    }
    return pos;
}

int next(Node *head, int pos)
{
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    if (temp->next == NULL)
    {
        cout << "Not Available" << endl;
    }
    else
    {
        cout << temp->next->name << endl;
        pos++;
    }
    return pos;
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        string name;
        cin >> name;
        if (name == "end")
            break;
        take_input_doubly(head, tail, name);
    }

    int q, pos = 0;
    cin >> q;
    while (q--)
    {
        string check;
        cin >> check;
        if (check == "visit")
        {
            cin >> check;
            pos = checking_node(head, check, pos);
        }
        else if (check == "prev")
        {
            pos = preview(head, pos);
        }
        else if (check == "next")
        {
            pos = next(head, pos);
        }
    }

    return 0;
}
