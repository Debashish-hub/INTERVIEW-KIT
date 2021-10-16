void createSet(Node *root, unordered_set<int> &s){
        if(root){
            createSet(root->left, s);
            s.insert(root->data);
            createSet(root->right, s);
        }
    }
    int countPairs(Node* root1, Node* root2, int x)
    {
        unordered_set<int> s1, s2;
        createSet(root1, s1);
        createSet(root2, s2);
        int sum = 0;
        for(auto ele: s1){
            if(s2.find(x - ele) != s2.end()){
                sum++;
            }
        }
        return sum;
    }