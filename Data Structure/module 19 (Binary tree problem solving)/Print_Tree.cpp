#include <bits/stdc++.h>

using namespace std;

vector <int> v;

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

void level_order(Node* root)
{
    queue <Node*> q;
    q.push(root);

    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        v.push_back(f->val);

        if(f->right) q.push(f->right);
        if(f->left) q.push(f->left);
    }
    
}



int main()
{
    Node *root = input_tree();
    level_order(root);
    
    reverse(v.begin(),v.end());

    if(root)
    {
        for (int ele : v)
        {
            cout<<ele<<" ";
        }
    }
    
    return 0;
}