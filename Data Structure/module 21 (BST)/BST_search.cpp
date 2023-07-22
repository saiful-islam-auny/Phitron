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

bool search(Node *root, int v)
{
    if (root == NULL)
        return false;

    if (root->val == v)
        return true;

    if (v < root->val)
        return search(root->left, v);
    else
        return search(root->right, v);
}

int main()
{
    Node *root = input_tree();

    if (search(root, 25))
        cout << "Found";
    else
        cout << "Not Found";
    return 0;
}

// 10 5 25 1 7 20 30 -1 -1 -1 -1 -1 -1 -1 -1