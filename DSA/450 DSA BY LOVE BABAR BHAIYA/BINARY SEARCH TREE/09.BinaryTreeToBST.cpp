void bst(Node *root, vector<int> arr, int &i){
        if(!root)return;
        bst(root->left, arr, i);
        root->data = arr[i++];
        bst(root->right, arr, i);
    }
    void inorder(Node* root, vector<int> &arr){
        if(!root)return;
        inorder(root->left, arr);
        arr.push_back(root->data);
        inorder(root->right, arr);
    }
    Node *binaryTreeToBST (Node *root)
    {
        //Your code goes here
        vector<int> arr;
        inorder(root, arr);
        sort(arr.begin(), arr.end());
        int i = 0;
        bst(root, arr, i);
        return root;
    }