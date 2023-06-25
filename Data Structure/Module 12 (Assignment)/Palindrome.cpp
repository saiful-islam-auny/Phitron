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

void print_list(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

void reverse_list(Node *&head, Node *cur)
{
    if(cur->next == NULL)
    {
        head = cur;
        return;
    }
    reverse_list(head, cur->next);
    cur->next->next = cur;
    cur->next = NULL;
}

bool check(Node*head, Node*head2)
{
    Node* temp1= head;
    Node* temp2= head2;

    while (temp1!=NULL)
    {
        if(temp1->val!=temp2->val)
        {
            return false;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    return true;

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
        tail_insert(head,tail,val);
        tail_insert(head2,tail2,val);
    }

    reverse_list(head2,head2);
    
    if(check(head,head2))
    {
        cout<<"YES";
    }
    else
        cout<<"NO";

    return 0;
}