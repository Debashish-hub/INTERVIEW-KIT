//////////////// Recursive //////////////////

void preorder_bst( TreeNode* node, vector<int>& vals) {
        if (node == nullptr)
            return;

        vals.push_back(node->val);
        preorder_bst(node->left, vals);
        preorder_bst(node->right, vals);
    }
    
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ret;
        preorder_bst(root, ret);
        return ret;        
    }

/////////////// Iterative //////////////////

vector<int> preorderTraversal(TreeNode* root) {
        vector<int> preorder; 
        
        TreeNode* cur = root; 
        while(cur != NULL) {
            if(cur->left == NULL) {
                preorder.push_back(cur->val); 
                cur = cur->right; 
            }
            else {
                TreeNode* prev = cur->left; 
                while(prev->right != NULL && prev->right != cur) {
                    prev = prev->right; 
                }
                
                if(prev->right == NULL) {
                    prev->right = cur;
                    preorder.push_back(cur->val); 
                    cur = cur->left; 
                }
                else {
                    prev->right = NULL;
                    cur = cur->right; 
                }
            }
        }
        return preorder; 
    }