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

void tail_insert(Node *&head, Node *&tail, int val, int a[]) // O(1)
{
    Node *NewNOde = new Node(val);

    a[NewNOde->val]++; // frequency array

    if (head == NULL)
    {
        head = NewNOde;
        tail = NewNOde;
    }
    tail->next = NewNOde; // new node linking with tail node
    tail = NewNOde;       // tail updated
}

// void print_list(Node *head)
// {
//     Node *temp = head;

//     while (temp != NULL)
//     {
//         cout << temp->val << " ";
//         temp = temp->next;
//     }
// }

// int size(Node* head)
// {
//     int count=0;
//     Node* temp = head;
//     while(temp!=NULL)
//     {
//         count++;
//         temp = temp->next;
//     }
//     return count;
// }

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    // int *a = new int[101];
    int a[101]={0};

    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        tail_insert(head, tail, val, a);
    }

    int i;
    bool flag = true;
    for (i = 1; i <= 100; i++)
    {
        if (a[i] > 1)
        {
            flag = false;
            break;
        }
        // cout<<i<<" "<<a[i]<<endl;
    }
    
    // if (flag == true)
    //     cout << "YES";
    // else
    //     cout << "NO";

    return 0;
}