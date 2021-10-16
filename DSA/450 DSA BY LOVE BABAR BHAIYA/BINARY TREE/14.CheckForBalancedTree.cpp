int count(Node *root, bool &ans){
    if(!root || !ans)
        return 0;
    int l = count(root->left, ans);
    int r = count(root->right, ans);
    
    ans = ans && (abs(l-r) <= 1) ;
    return 1+max(l,r);
}
//Function to check whether a binary tree is balanced or not.
bool isBalanced(Node *root)
{
    //  Your Code here
    bool ans = true;
    count(root,ans);
    return ans;
}