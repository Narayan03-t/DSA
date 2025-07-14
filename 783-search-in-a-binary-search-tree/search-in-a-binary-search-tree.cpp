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
    TreeNode* searchBST(TreeNode* root, int val) {
        // Base case: root is null or value is found
        if (!root || root->val == val)
            return root;
        // If val is less, search left subtree
        if (val < root->val)
            return searchBST(root->left, val);
        // If val is greater, search right subtree
        return searchBST(root->right, val);
    }
};