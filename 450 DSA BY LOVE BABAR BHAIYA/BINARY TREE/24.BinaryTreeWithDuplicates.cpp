string solve(Node* root, unordered_map<string,int> &m){
            if(!root) 
                return "$";
            string s = "";
            if(!root->right && !root->left){
                s = to_string(root->data);
                return s;
            }
            s = s + to_string(root->data);
            s = s + solve(root->left, m);
            s = s + solve(root->right, m);
            m[s]++;
            return s;
            
        }
    int dupSub(Node *root) {
         // code here
        unordered_map<string,int> m;
        solve(root, m);
        for(auto x:m){
            if(x.second >= 2) 
                return true;
        }
        return false;
    }