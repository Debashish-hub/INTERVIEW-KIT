TreeNode* minval(TreeNode* root){
        while(root->left != NULL)
            root = root->left;
        return root;
    }
    
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root == NULL)
            return NULL;
        if(key < root->val)
            root->left =  deleteNode(root->left, key);
        else if(key > root->val)
            root->right =  deleteNode(root->right, key);
        else{
            if(root->right==NULL && root->left==NULL)
                return NULL;
            else if(root->right && root->left==NULL)
            {
                TreeNode* temp=root->right;
                delete(root);
                return temp;
            }
            else if(root->left && root->right==NULL)
            {
                TreeNode* temp=root->left;
                delete(root);
                return temp;
            }
            TreeNode* temp=minval(root->right);
            root->val=temp->val;
            root->right=deleteNode(root->right,temp->val);
        }
        return root;
    }