vector<int> topView(Node *root)
    {
        //Your code here
        map<int, int> mp;
        queue<pair<Node*, int>> q;
        vector<int> ans;
        q.push({root, 0});
        while(!q.empty()){
            auto p = q.front();
            Node *curr = p.first;
            int hd = p.second;
            if(mp.find(hd) == mp.end()){
                mp[hd] = curr->data;
            }
            q.pop();
            if(curr->left!=NULL)
                q.push({curr->left,hd-1});
            if(curr->right!=NULL)
                q.push({curr->right,hd+1});
        }
        for(auto x : mp){
            ans.push_back(x.second);
        }
        return ans;
    }