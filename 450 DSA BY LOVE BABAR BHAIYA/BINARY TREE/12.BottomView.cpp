vector <int> bottomView(Node *root) {
        // Your Code Here
        vector<int> ans;
        if(root == NULL)return ans;
        queue<pair<Node*, int>> q;
        map<int, int> mp;
        q.push({root,0});
        while(!q.empty()){
            auto p = q.front();
            int hd = p.second;
            Node *temp = p.first;
            mp[hd] = temp->data;
            q.pop();
            if(temp->left)q.push({temp->left, hd-1});
            if(temp->right)q.push({temp->right, hd+1});
        }
        for(auto x:mp){
            ans.push_back(x.second);
        }
        return ans;
    }