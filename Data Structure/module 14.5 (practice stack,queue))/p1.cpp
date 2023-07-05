#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class myStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    void push(int val)
    {
        sz++;
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        newNode->prev = tail;
        tail->next = newNode;
        tail = tail->next;
    }
    void pop()
    {
        sz--;
        Node *deleteNode = tail;
        tail = tail->prev;
        if (tail == NULL)
        {
            head = NULL;
        }
        else
        {
            tail->next = NULL;
        }
        delete deleteNode;
    }
    
    int top()
    {
        return tail->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if (sz == 0)
            return true;
        else
            return false;
    }
};
int main()
{
    myStack st1, st2;

    int n, m;
    cout << "Enter n: ";
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        st1.push(x);
    }
    cout << "\nEnter m: ";
    cin >> m;
    while (m--)
    {
        int x;
        cin >> x;
        st2.push(x);
    }

    if (n != m)
    {
        cout << "NO";
    }

    else
    {
        bool flag = true;
        while (!st1.empty())
        {
            if (st1.top() != st2.top())
            {
                flag = false;
                break;
            }
            st1.pop();
            st2.pop();
        }
        if (flag)
            cout << "YES";
        else
            cout << "NO";
    }

    return 0;
}