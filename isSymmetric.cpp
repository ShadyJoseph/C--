using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

bool isMirror(TreeNode *left, TreeNode *right)
{
    if(!left&&!right) return true;
    if(!left||!right) return false;
    if (left->val != right->val) return false;

    return isMirror(left->right,right->left)&&(left->left,right->right);
}

bool isSymmetric(TreeNode *tree)
{
    if (!tree) return true;
    return isMirror(tree->left,tree->right);
}