int solve(Node *root, bool &ans){
        if(root == NULL){
            return 0;
        }
        int l = solve(root->left, ans);
        int r = solve(root->right, ans);
        if(root->left && root->right && l!=r){
            ans = false;
        }
        return 1 + max(l,r);
    }
    /*You are required to complete this method*/
    bool check(Node *root)
    {
        //Your code here
        bool ans = true;
        solve(root, ans);
        return ans;
    }