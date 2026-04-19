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

    bool balanced = true;

    bool isBalanced(TreeNode* root) {
        helper(root);
        return balanced;
    }

    int helper(TreeNode* root){
        if (!root) return 0;

        int lh = helper(root->left);
        int rh = helper(root->right);

        if (std::abs(rh - lh) > 1) balanced = false;
        return 1+std::max(lh, rh);
    }
};
