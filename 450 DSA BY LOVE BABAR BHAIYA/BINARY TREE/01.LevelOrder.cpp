vector<int> levelOrder(Node* node)
    {
      //Your code here
      queue<Node *> q;
      vector<int> arr;
      if(node == NULL)return arr;
      q.push(node);
      while(!q.empty()){
          Node* temp = q.front();
          arr.push_back(temp->data);
          q.pop();
          if(temp->left){
              q.push(temp->left);
          }
          if(temp->right){
              q.push(temp->right);
          }
      }
      return arr;
      
    }