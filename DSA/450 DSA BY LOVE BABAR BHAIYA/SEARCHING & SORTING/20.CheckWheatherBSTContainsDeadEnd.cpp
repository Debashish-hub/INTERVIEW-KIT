bool fun(Node *root,int low,int high){
   if(root!=NULL){
       bool left=fun(root->left,low,root->data-1);
       if(root->left==NULL && root->right==NULL){
           if(low==high){
               return true;
           }
           else{
               return false;
           }
       }
       bool right=fun(root->right,root->data+1,high);
       return left || right;
   }
}
bool isDeadEnd(Node *root)
{
    //Your code here
    return fun(root,1,INT_MAX);
}