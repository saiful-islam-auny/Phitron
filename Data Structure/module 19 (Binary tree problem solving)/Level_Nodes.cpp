#include <bits/stdc++.h>

using namespace std;

vector<int> v;

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

void tracking_level(Node *root, int lvl)
{
    queue<pair<Node *, int>> q;
    q.push({root, 0});
    int level;

    while (!q.empty())
    {
        pair<Node *, int> pr = q.front();
        q.pop();
        Node *node = pr.first;
        level = pr.second;

        if (level == lvl)
        {
            cout << pr.first->val << " ";
        }

        if (node->left)
        {
            q.push({node->left, level + 1});
        }
        if (node->right)
        {
            q.push({node->right, level + 1});
        }
    }
    if (lvl > level)
        cout << "Invalid";
}

int main()
{
    Node *root = input_tree();
    int lvl;
    cin >> lvl;

    if(root) tracking_level(root, lvl);

    return 0;
}
