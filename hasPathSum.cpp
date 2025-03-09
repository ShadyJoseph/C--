struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

bool hasPathSum(TreeNode *root, int target)
{
    if (!root)
        return false;
    target -= root->val;
    if (!root->left && !root->right && target == 0)
        return true;
    return hasPathSum(root->left, target) || hasPathSum(root->right, target);
}