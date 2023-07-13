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
    std::pair<int, int> calculateTilt(TreeNode* node) {
    if (node == nullptr)
        return {0, 0};

    auto leftSubtree = calculateTilt(node->left);
    auto rightSubtree = calculateTilt(node->right);

    int tilt = abs(leftSubtree.second - rightSubtree.second);
    int sum = node->val + leftSubtree.second + rightSubtree.second;

    return {tilt + leftSubtree.first + rightSubtree.first, sum};
}

int findTilt(TreeNode* root) {
    auto result = calculateTilt(root);
    return result.first;
}

};