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
    int dia = 0;

    int diameterOfBinaryTree(TreeNode* root) {
        helper(root);
        return dia;
        
    }

    int helper(TreeNode* root){
        if (!root) return 0;
        int lh = helper(root->left);
        int rh = helper(root->right);

        int d = lh + rh;
        if (d > dia){
            cout << "setting dia to " << d << endl;
            cout << "lh " << lh << endl;
            cout << "rh " << rh << endl;
            cout << "curr node " << root->val << endl;
            dia = d;
        }

        return 1 + max(lh, rh);
    }

};
