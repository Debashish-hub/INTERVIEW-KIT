int solve(TreeNode* root , int &maxSum){
        if(!root)
            return 0;
        int l = max(solve(root->left, maxSum), 0);
        int r = max(solve(root->right, maxSum), 0);
        maxSum = max(maxSum , (root->val + l + r));
        return root->val + max(l,r);
    }
    int maxPathSum(TreeNode* root) {
        int maxSum = INT_MIN;
        solve(root, maxSum);
        return maxSum;
    }