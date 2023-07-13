#include <bits/stdc++.h> 
/*
Following is the structure of Tree Node

class TreeNode 
{
   public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) 
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};
*/
vector<int> postorderTraversal(TreeNode* root) {
    vector<int> result;

    if (root == NULL) {
        return result;
    }

    // Traverse left subtree
    vector<int> left = postorderTraversal(root->left);
    result.insert(result.end(), left.begin(), left.end());

    // Traverse right subtree
    vector<int> right = postorderTraversal(root->right);
    result.insert(result.end(), right.begin(), right.end());

    // Append root value
    result.push_back(root->val);

    return result;
}


