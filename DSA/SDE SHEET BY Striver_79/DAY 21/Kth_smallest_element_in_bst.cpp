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
    int pos = -1, res = -1;
    void helper(TreeNode* root, int k) {
        if(root == nullptr)
            return;
    
        helper(root->left, k);
        pos++;
        if(pos == k-1)
            res = root->val;
        helper(root->right, k);
    }
	
    int kthSmallest(TreeNode* root, int k) {
        helper(root, k);
        return res;
    }
};