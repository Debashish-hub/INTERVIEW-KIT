int height(Node* node, int &res){
        // code here 
        if(node == NULL)return 0;
        int lh = height(node->left, res);
        int rh = height(node->right, res);
        res = max(res,lh+rh+1);
        return max(lh,rh)+1;
    }
    int diameter(Node* root) {
        // Your code here
        int res = 0;
        if(root == NULL)return 0;
        height(root, res);
        return res;
    }