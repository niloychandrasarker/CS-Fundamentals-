vector<int> getInOrderTraversal(TreeNode *root)
{
    vector<int> result;

    if (root == NULL)
    {
        return result;
    }

    vector<int> left = getInOrderTraversal(root->left);
    result.insert(result.end(), left.begin(), left.end());

    result.push_back(root->data);

    vector<int> right = getInOrderTraversal(root->right);
    result.insert(result.end(), right.begin(), right.end());

    return result;
}
