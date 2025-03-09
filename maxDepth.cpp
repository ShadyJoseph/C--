using namespace std;
#include <algorithm>
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

int maxDepth(TreeNode *tree)
{
    if (tree == nullptr)
        return 0;
    int leftD = maxDepth(tree->left);
    int rightD = maxDepth(tree->right);

    return max(leftD, rightD) + 1;
}