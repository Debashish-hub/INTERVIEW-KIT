Node* lca(Node* root ,int n1 ,int n2 )
    {
       //Your code here 
       Node *l = NULL ,*r = NULL;
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
    int distance(Node *root, int value, int dist){
        if(root == NULL)return -1;
        if(root->data == value){
            return dist;
        }
        int l = distance(root->left, value, dist+1);
        int r = distance(root->right, value, dist+1);
        return max(l,r);
    }
    int findDist(Node* root, int a, int b) {
        // Your code here
        int dist = 0;
        Node *common = lca(root, a,b);
        int d1 = distance(common, a, 0);
        int d2 = distance(common, b, 0);
        return d1 + d2;
    }