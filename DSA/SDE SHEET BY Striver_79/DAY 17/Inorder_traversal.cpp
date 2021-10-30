/////////////////// Recursive Solution ///////////////

void solve(TreeNode *root, vector<int> &res){
        if(root == NULL)
            return;
        solve(root->left, res);
        res.push_back(root->val);
        solve(root->right, res);
        return;
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        solve(root,res);
        return res;
    }

//////////////////// Iterative Solution /////////////////////////////////

 vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*> st; 
        TreeNode* node = root;
        vector<int> inorder; 
        while(true) {
            if(node != NULL) {
                st.push(node); 
                node = node->left; 
            }
            else {
    
                if(st.empty() == true) break; 
                node = st.top(); 
                st.pop(); 
                inorder.push_back(node->val); 
                node = node->right; 
            }  
        }
        return inorder; 
    }