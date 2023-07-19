class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if (nums.empty()) {
            return nullptr;
        }

        int mid = nums.size() / 2;

        TreeNode* root = new TreeNode(nums[mid]);

        vector<int> leftNums(nums.begin(), nums.begin() + mid);
        root->left = sortedArrayToBST(leftNums);

        vector<int> rightNums(nums.begin() + mid + 1, nums.end());
        root->right = sortedArrayToBST(rightNums);

        return root;
    }
};
