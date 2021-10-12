vector<int> leftView(Node *root)
{
   // Your code here
   vector<int> ans;
   if(root == NULL)return ans;
   queue<Node *> q;
   q.push(root);
   while(!q.empty()){
       int count = q.size();
       for(int i=0; i<count; i++){
           Node *temp = q.front();
           if(i == 0)ans.push_back(temp->data);
           q.pop();
           if(temp->left)q.push(temp->left);
           if(temp->right)q.push(temp->right);
       }
   }
   return ans;
}