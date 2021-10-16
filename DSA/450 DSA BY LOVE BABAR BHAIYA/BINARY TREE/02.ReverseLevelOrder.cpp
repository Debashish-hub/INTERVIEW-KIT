vector<int> reverseLevelOrder(Node *root)
{
    // code here
      queue<Node *> q;
      vector<int> arr;
      if(root == NULL)return arr;
      q.push(root);
      while(!q.empty()){
          Node* temp = q.front();
          arr.push_back(temp->data);
          q.pop();
          if(temp->right){
              q.push(temp->right);
          }
          if(temp->left){
              q.push(temp->left);
          }
      }
      reverse(arr.begin(), arr.end());
      return arr;
}