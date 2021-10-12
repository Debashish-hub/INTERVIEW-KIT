bool search(Node* root, int min, int max){
        if(!root){
            return true;
        }
        return (root->data > min && root->data < max && search(root->left, min, root->data) && search(root->right, root->data,max));
    }
    //Function to check whether a Binary Tree is BST or not.
    bool isBST(Node* root) 
    {
        // Your code here
        int min = INT_MIN, max = INT_MAX;
        return search(root, min, max);
    }