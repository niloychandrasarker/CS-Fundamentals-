/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
   bool checkTree(TreeNode* root) {
    if (root == nullptr || (root->left == nullptr && root->right == nullptr))
        return false;

    int childrenSum = 0;
    if (root->left != nullptr)
        childrenSum += root->left->val;
    if (root->right != nullptr)
        childrenSum += root->right->val;

    if (root->val == childrenSum)
        return true;
    else
        return false;
}

};          