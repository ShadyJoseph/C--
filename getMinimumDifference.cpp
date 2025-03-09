#include <iostream>
#include <climits>  // For INT_MAX

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    int minDiff = INT_MAX; // Store the minimum absolute difference
    int prev = -1; // Store the previous node value (initialized to an invalid value)

    void inorderTraversal(TreeNode* root) {
        if (!root) return;

        inorderTraversal(root->left); // Left

        if (prev != -1) { // If prev is valid (not the first node)
            minDiff = min(minDiff, abs(root->val - prev));
        }
        prev = root->val; // Update prev to the current node's value

        inorderTraversal(root->right); // Right
    }

    int getMinimumDifference(TreeNode* root) {
        inorderTraversal(root);
        return minDiff;
    }
};
