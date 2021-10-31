class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root==NULL)
            return {};
        queue<TreeNode*> q;        
        vector<vector<int>> v;
        TreeNode* temp;
        q.push(root);
        while(!q.empty()){
            int len = q.size();
            vector<int> t;
            for(int i=0;i<len;i++){
                temp =  q.front();
                q.pop();
                t.push_back(temp->val);
                
                if(temp->left!=NULL){
                    q.push(temp->left);
                }
                if(temp->right!=NULL){
                    q.push(temp->right);
                }
            }
            v.push_back(t);
        }
        return v;
    }
};