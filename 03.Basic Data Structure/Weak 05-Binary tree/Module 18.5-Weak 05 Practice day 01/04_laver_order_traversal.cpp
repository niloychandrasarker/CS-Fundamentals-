#include <bits/stdc++.h> 
/************************************************************

    Following is the BinaryTreeNode class structure

    template <typename T>
    class BinaryTreeNode {
       public:
        T val;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
    vector<int> result;
    if (root == nullptr) {
        return result;
    }

    queue<BinaryTreeNode<int>*> nodeQueue;
    nodeQueue.push(root);

    while (!nodeQueue.empty()) {
        BinaryTreeNode<int>* current = nodeQueue.front();
        nodeQueue.pop();

        result.push_back(current->val);

        if (current->left != nullptr) {
            nodeQueue.push(current->left);
        }

        if (current->right != nullptr) {
            nodeQueue.push(current->right);
        }
    }

    return result;
}
