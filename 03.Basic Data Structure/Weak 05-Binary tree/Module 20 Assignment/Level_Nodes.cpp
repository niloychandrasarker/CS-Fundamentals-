/*
||-------------------------------------------||
||            Niloy Chandra Sarker           ||
|| Dept. of Computer science and Engineering ||
||   Faculty of engineering and technology   ||
||            University of Dhaka            ||
||-------------------------------------------||
*/
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
        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);
        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}
void printLevel(Node *root, int X)
{
    if (root == NULL)
        return;

    queue<pair<Node *, int>> q; 
    q.push({root, 0});

    bool flag = false; 

    while (!q.empty())
    {
        Node *node = q.front().first;
        int level = q.front().second;
        q.pop();

        if (level == X)
        {
            cout << node->val << " ";
            flag = true;
        }

        if (level > X) 
            break;

        if (node->left)
            q.push({node->left, level + 1});
        if (node->right)
            q.push({node->right, level + 1});
    }

    if (flag==false)
        cout << "Invalid";
}

int main()
{
    Node *root = input_tree();

    int X;
    cin >> X;

    printLevel(root, X);

    return 0;
}
