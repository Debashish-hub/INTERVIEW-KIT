void solve(Node *root, int &K, int &ans){
            if(root == NULL)return;
            solve(root->left, K ,ans);
            K--;
            if(K==0){
                ans = root->data;
                return;
            }
            solve(root->right, K, ans);
        }
    // Return the Kth smallest element in the given BST 
    int KthSmallestElement(Node *root, int K)
    {
        //add code here.
        int ans  = -1;
        solve(root, K, ans);
        return ans;
    }