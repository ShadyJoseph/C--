#include <vector>
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

TreeNode *buildBST(vector<int> nums, int left, int right)
{
    if (left > right)
        return nullptr;
    int mid = left + (right - left) / 2;
    TreeNode *tree = new TreeNode[nums[mid]];
    tree->left = buildBST(nums, left, mid - 1);
    tree->right = buildBST(nums, mid + 1, right);
    return tree;
}

TreeNode *sortedArrayToBST(vector<int> &nums)
{
    return buildBST(nums, 0, nums.size() - 1);
}
