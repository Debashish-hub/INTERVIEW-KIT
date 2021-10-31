class Solution {
public:
    int maximum(TreeNode* root, bool &ans){
        if(root==NULL)
            return(0);
        int l = maximum(root->left,ans);
        int r = maximum(root->right,ans);
        if(abs(l-r)>1)
            ans = false;
        return(1+max(l,r));
    }
    
    bool isBalanced(TreeNode* root) {
        bool ans = true;
        maximum(root,ans);
        return(ans);
    }
};