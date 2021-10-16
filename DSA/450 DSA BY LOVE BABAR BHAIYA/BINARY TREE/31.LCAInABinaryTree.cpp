Node* lca(Node* root ,int n1 ,int n2 )
    {
       //Your code here 
       Node *l ,*r;
       if(!root)
        return NULL;
       if(n1 == root->data || n2 == root->data){
           return root;
       }
       l = lca(root->left, n1, n2);
       r = lca(root->right, n1, n2);
       if(l && r){
           return root;
       }else if(l || r){
           return l ? l : r;
       }else{
           return NULL;
       }
       
    }