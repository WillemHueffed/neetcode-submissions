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
    std::vector<int> l1;
    std::vector<int> l2;
    bool isSameTree(TreeNode* p, TreeNode* q) {
        traverse(p, l1);
        traverse(q, l2);
        for (int x : l1){
            cout << x << " ";
        }
        cout << endl;
        for (int x : l2){
            cout << x << " ";
        }
        cout << endl;
        return l1 == l2;
    }

    void traverse(TreeNode* root, std::vector<int>& l) {
        // if (!root) l.push_back(1);
        if (!root){
            l.push_back(-1);
            return;
        } 

        l.push_back(root->val);
        traverse(root->left, l);
        traverse(root->right, l);
    }
};
