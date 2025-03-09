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

TreeNode* revertTree(TreeNode *tree) {
    if (!tree) return nullptr; // Base case: empty tree

    // Swap left and right subtrees
    TreeNode *temp = tree->left;
    tree->left = revertTree(tree->right);
    tree->right = revertTree(temp);

    return tree; // Return the new root
}
