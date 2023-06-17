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
    else
    {
        tail->next = NewNOde;
        tail = NewNOde;
    }
}

void min_max(Node *head, int *min, int *max)
{
    Node *tmp = head;
    if (tmp->next == NULL)
    {
        *max = tmp->val;
        *min = tmp->val;
        return;
    }
    while (tmp != NULL)
    {
        if (*max < tmp->val)
            *max = tmp->val;
        if (*min > tmp->val)
            *min = tmp->val;

        tmp = tmp->next;
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

    int min = INT_MAX;
    int max = INT_MIN;

    min_max(head, &min, &max);
    cout << min << " " << max;

    return 0;
}

// #include <bits/stdc++.h>

// using namespace std;

// class Node
// {
// public:
//     int val;
//     Node *next;

//     Node(int val)
//     {
//         this->val = val;
//         this->next = NULL;
//     }
// };

// void tail_insert(Node *&head, Node *&tail, int val)
// {
//     Node *NewNOde = new Node(val);
//     if (head == NULL)
//     {
//         head = NewNOde;
//         tail = NewNOde;
//     }
//     else
//     {
//         tail->next = NewNOde;
//         tail = NewNOde;
//     }
// }

// int min(Node *head)
// {
//     int min = INT_MAX;
//     Node *tmp = head;

//     if (tmp->next == NULL)
//     {
//         return tmp->val;
//     }

//     while (tmp != NULL)
//     {
//         if (min > tmp->val)
//             min = tmp->val;
//         tmp = tmp->next;
//     }
//     return min;
// }

// int max(Node *head)
// {
//     int max = INT_MIN;
//     Node *tmp = head;

//     if (tmp->next == NULL)
//     {
//         return tmp->val;
//     }

//     while (tmp != NULL)
//     {
//         if (max < tmp->val)
//             max = tmp->val;
//         tmp = tmp->next;
//     }
//     return max;
// }

// int main()
// {
//     Node *head = NULL;
//     Node *tail = NULL;

//     while (true)
//     {
//         int val;
//         cin >> val;
//         if (val == -1)
//             break;
//         tail_insert(head, tail, val);
//     }

//     cout << min(head) << " " << max(head);

//     return 0;
// }