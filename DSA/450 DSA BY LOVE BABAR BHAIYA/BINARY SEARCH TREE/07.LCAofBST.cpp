Node* LCA(Node *root, int n1, int n2)
{
   //Your code here
   if(!root){
       return NULL;
   }
   if(root->data == n1 || root->data == n2){
       return root;
   }
   Node *l = LCA(root->left, n1, n2);
   Node *r = LCA(root->right, n1, n2);
   if(l && r){
       return root;
   }else if(l){
       return l;
   }else if(r){
       return r;
   }else{
       return NULL;
   }
}