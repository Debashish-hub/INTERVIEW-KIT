int minValue(Node* root)
{
    // Code here
    if(root == NULL)return NULL;
    if(!root->left)return root->data;
    while(root->left != NULL){
        root = root->left;
    }
    return root->data;
}