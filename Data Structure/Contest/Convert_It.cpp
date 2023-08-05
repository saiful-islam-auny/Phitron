#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

priority_queue<int> pq;

Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);

    queue<Node *> q;
    if (root)
        q.push(root);

    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *myLeft;
        Node *myRight;

        if (l != -1)
        {
            myLeft = new Node(l);
            p->left = myLeft;
        }

        if (r != -1)
        {
            myRight = new Node(r);
            p->right = myRight;
        }

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}

void levelOrderToPQ(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *f = q.front();
        pq.push(q.front()->val);
        q.pop();

        if (f->left)
            q.push(f->left);

        if (f->right)
            q.push(f->right);
    }
}

int main()
{
    Node *root = input_tree();
    levelOrderToPQ(root);

    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            int val;
            cin >> val;
            Node *node = new Node(val);
            pq.push(node->val);
        }
        else if (x == 2)
        {
            cout << pq.top() << endl;
            pq.pop();
        }
    }
    return 0;
}