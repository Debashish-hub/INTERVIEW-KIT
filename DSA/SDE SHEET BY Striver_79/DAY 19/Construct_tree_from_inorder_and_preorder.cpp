/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int preOrder =0;
    TreeNode* build(vector<int> &pre, vector<int>& in, int s, int e){
        if (e < s)
            return NULL;
        if (e == s){
            return new TreeNode(pre[preOrder++]);
        }
        TreeNode* root = new TreeNode(pre[preOrder++]);
        int new_s = s;
        for(int i=s; i <= e; i++){
            if(in[i] == root -> val){
                new_s=i;
            }
        }
        root->left = build(pre, in, s, new_s-1);
        root->right = build(pre, in, new_s+1, e);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return build(preorder, inorder , 0, inorder.size()-1);
    }
};