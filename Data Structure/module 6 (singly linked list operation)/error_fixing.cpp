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

void insert_tail(Node *&head, int val)
{
    Node *NewNode = new Node(val);

    if (head == NULL)
    {
        head = NewNode;
        cout << "Head inserted" << endl
             << endl;
        return;
    }
    else
    {
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = NewNode;
        cout << "Tail inserted" << endl
             << endl;
    }
}

// void insert_head(Node *&head, int val)
// {
//     Node *NewNode = new Node(val);
//     NewNode->next = head;
//     head = NewNode;
// }

void insert_head(Node *&head, int val)
{
    Node *NewNode = new Node(val);

    if (head == NULL)
    {
        head = NewNode;
        cout << "Head inserted" << endl
             << endl;
        return;
    }
    else
    {
        Node *temp = head;
        head = NewNode;
        head->next = temp;
        cout << "Head inserted" << endl
             << endl;
    }
}

void insert_any_pos(Node *head, int pos, int v)
{
    Node *NewNode = new Node(v);
    Node *temp = head;

    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
        if (temp == NULL)
        {
            cout << "Invalid index" << endl<<endl;
            return;
        }
    }
    NewNode->next = temp->next;
    temp->next = NewNode;
}

void print_linked(Node *head)
{
    Node *temp = head;

    cout << "Linked list: ";
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl
         << endl;
}

void delete_node(Node *head, int pos)
{
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
        if (temp == NULL)
        {
            cout << "Invalid index" << endl<<endl;
            return;
        }
    }
    if (temp->next == NULL)
    {
        cout << endl
             << "Invalid Index" << endl
             << endl;
        return;
    }
    Node *DeleteNode = temp->next;
    temp->next = temp->next->next;
    delete DeleteNode;
}

void delete_head(Node *&head)
{
    Node *DeleteHead = head;
    head = head->next;
    delete DeleteHead;
    cout << "Head deleted" << endl;
}

int main()
{

    Node *head = NULL;

    while (true)
    {
        int n;
        cout << "1. Insert in tail" << endl; // done
        cout << "2. Insert in Head" << endl; // done
        cout << "3. Insert at any position: " << endl;
        cout << "4. Print linked list" << endl;
        cout << "5. End operation" << endl;
        cout << "6. Delete any Position" << endl;
        cout << "7. Delete Head" << endl;
        cin >> n;

        if (n == 1)
        {
            cout << "Enter value to insert: ";
            int val;
            cin >> val;
            insert_tail(head, val);
        }

        else if (n == 2)
        {
            cout << "Enter value to insert in head: ";
            int val;
            cin >> val;
            insert_head(head, val);
        }

        else if (n == 3)
        {
            int pos, v;
            cout << "Enter position: ";
            cin >> pos;
            cout << "Enter value: ";
            cin >> v;
            if (pos == 0)
            {
                insert_head(head, v);
            }
            else
                insert_any_pos(head, pos, v);
        }

        else if (n == 4)
        {
            print_linked(head);
        }

        else if (n == 5)
        {
            cout << "\n*** Operataion End ***" << endl;
            break;
        }
        else if (n == 6)
        {
            int pos;
            cout<<"Enter position: ";
            cin >> pos;
            if (pos == 0)
            {
                delete_head(head);
            }
            else
                delete_node(head, pos);
        }
        else if (n == 7)
        {
            delete_head(head);
        }
    }

    return 0;
}