void toSumTree(Node *node)
    {
        // Your code here
        if(node == NULL) return;
        if(!node->left && !node->right){
            node->data = 0;
        }else{
            int l = 0, r = 0;
            if(node->left){
                l = node->left->data;
                toSumTree(node->left);
                l += node->left->data;
            }
            if(node->right){
                r = node->right->data;
                toSumTree(node->right);
                r += node->right->data;
            }
            node->data = l+r;
        }
        
    }