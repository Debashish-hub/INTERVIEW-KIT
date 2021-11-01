void mirror(Node* root) {
        // code here
        if(root == NULL){
            return;
        }
        if(root->left && root->right){
            Node *temp = root->left;
            root->left = root->right;
            root->right = temp;
        }else if(root->left && !root->right){
            root->right = root->left;
            root->left = NULL;
        }else{
            root->left = root->right;
            root->right = NULL;
        }
        mirror(root->left);
        mirror(root->right);
    }