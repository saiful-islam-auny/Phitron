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

int max_height_count(Node* root)
{
    if(root == NULL) return 0;
    
    int l = max_height_count(root->left);
    int r = max_height_count(root->right);

    return max(l,r)+1;
}

int count(Node *root)
{
    if (root == NULL)
        return 0;

    int l = count(root->left);
    int r = count(root->right);
    if (l == 0 && r == 0)
        return 1;
    else
        return l + r + 1;
}

int main()
{
    Node* root = input_tree();
    
    int maxHeight = max_height_count(root);
    int totalNode = count(root);

    if(totalNode == pow(2,maxHeight)-1)
        cout<<"YES";
    else
        cout<<"NO";
        
    return 0;
}