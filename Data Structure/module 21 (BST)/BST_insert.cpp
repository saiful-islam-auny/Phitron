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

void level_order(Node *root)
{
    if (root == NULL)
    {
        cout << "Tree nai" << endl;
        return;
    }

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        cout << f->val << " ";

        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}

void insert(Node *&root, int x)
{   
    if (root == NULL)
    {
        root = new Node(x);
        return;
    }

    if (x < root->val)
    {
        if(root->left==NULL) 
        {
            root->left = new Node(x);
        }
        else
            insert(root->left,x);
    }

    else
    {
        if(root->right==NULL) 
        {
            root->right = new Node(x);
        }
        else
            insert(root->right,x);
    }
}

int main()
{
    Node *root = input_tree();
    insert(root, 8);
    level_order(root);

    return 0;
}
// 10 5 20 1 7 -1 30 -1 -1 -1 -1 25 40 -1 -1 -1 -1