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

int max_leaf(Node *root)
{
    if (root == NULL)
        return INT_MIN;

    if (root->left == NULL && root->right == NULL)
        return root->val;

    int l_max = max_leaf(root->left);
    int r_max = max_leaf(root->right);

    return max(l_max, r_max);
}

int min_leaf(Node *root)
{
    if (root == NULL)
        return INT_MAX;

    if (root->left == NULL && root->right == NULL)
        return root->val;

    int l_min = min_leaf(root->left);
    int r_min = min_leaf(root->right);

    return min(l_min, r_min);
}


int main()
{
    Node *root = input_tree();
    
    if(root) cout << max_leaf(root)<<" "<<min_leaf(root);

    return 0;
}