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
  bool traverse(TreeNode* node, int value) {
    if (node == nullptr)
        return true;

    if (node->val != value)
        return false;

    return traverse(node->left, value) && traverse(node->right, value);
}

bool isUnivalTree(TreeNode* root) {
    if (root == nullptr)
        return true;

    return traverse(root, root->val);
}
};