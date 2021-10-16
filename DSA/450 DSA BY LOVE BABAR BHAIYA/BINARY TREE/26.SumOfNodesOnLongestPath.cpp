int mh, ms;
    void solve(Node *root, int sum, int height){
        if(root == NULL)return;
        sum += root->data;
        if(height >= mh){
            if(height > mh){
                mh = height;
                ms = sum;
            }
            else{
                ms = max(ms, sum);
            }
        }
        solve(root->left, sum, height+1);
        solve(root->right, sum, height+1);
    }
    int sumOfLongRootToLeafPath(Node *root)
    {
        //code here
        mh = -1;
        ms = 0;
        solve(root, 0, 0);
        return ms;
    }