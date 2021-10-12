int isLeaf(Node *node)
    {
        if(node == NULL)
            return 0;
        if(node->left == NULL && node->right == NULL)
            return 1;
        return 0;
    }
    bool isSumTree(Node* node)
    {
         // Your code here
        int ls, rs;
        if(node == NULL || isLeaf(node))
            return true;
     
        if( isSumTree(node->left) && isSumTree(node->right)) {
            if(node->left == NULL)
                ls = 0;
            else if(isLeaf(node->left))
                ls = node->left->data;
            else
                ls = 2 * (node->left->data);
            if(node->right == NULL)
                rs = 0;
            else if(isLeaf(node->right))
                rs = node->right->data;
            else
                rs = 2 * (node->right->data);
            return(node->data == ls + rs);
        }
        return false;
    }