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
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if (!root) return false;
        bool isSame = false;
        if (root->val == subRoot->val) {
            isSame = sameTree(root, subRoot);
        }
        return isSame || isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }

    bool sameTree(TreeNode* l1, TreeNode* l2){
        if (!l1 && !l2) return true;
        if (!l1 || !l2) return false;

        if (l1->val == l2->val){
            return sameTree(l1->left, l2->left) && sameTree(l1->right, l2->right);
        }
        return false;
    }
};
