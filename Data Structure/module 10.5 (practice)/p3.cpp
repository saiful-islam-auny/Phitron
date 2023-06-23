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

bool check_palindrome(Node *head, Node *tail)
{
    Node *i = head;
    Node *j = tail;
    bool flag = true;
    while (i != j)
    {
        if (i->val != j->val)
        {
            flag = false;
            break;
        }
        if (i->next == j)
            break;

        i = i->next;
        j = j->previous;
    }
    return flag;
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

    if(check_palindrome(head,tail))
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}