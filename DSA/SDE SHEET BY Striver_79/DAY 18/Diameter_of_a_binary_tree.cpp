class Solution {
public:
    int solve(TreeNode* root, int &ans){
        if(root == NULL){
            return 0;
        }
        int l = solve(root->left, ans);
        int r = solve(root->right, ans);
        ans = max(l+r, ans);
        return max(l,r)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int ans = 0;
        solve(root, ans);
        return ans;
    }
};