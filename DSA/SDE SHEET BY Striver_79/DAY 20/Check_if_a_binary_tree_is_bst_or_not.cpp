class Solution {
public:
    bool bst(TreeNode* node, TreeNode* min, TreeNode* max) {
        if (node == NULL) {
            return true;
        }
        
        if ((min && node->val <= min->val) || (max && node->val >= max->val)) {
            return false;
        }

        return bst(node->left, min, node) && bst(node->right, node, max);
    }

    bool isValidBST(TreeNode* root) {
        return bst(root, NULL, NULL);
    }
};