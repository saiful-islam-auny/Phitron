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

int findMin(Node* root) {
    if (root == NULL)
        return INT_MAX;

    int leftMin = findMin(root->left);
    int rightMin = findMin(root->right);

    return min(root->val, min(leftMin, rightMin));
}

int main()
{
    Node *root = input_tree();
    cout << findMin(root);
    return 0;
}