class Solution {
public:
    TreeNode* bst(vector<int>& nums, int i, int j){
        if(i > j) return NULL;
        int mid = i + (j-i)/2;
        TreeNode* res = new TreeNode(nums[mid]);
        res -> left = bst(nums, i, mid-1);
        res -> right = bst(nums, mid+1, j);
        return res;
        
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return bst(nums, 0, nums.size()-1);  
    }
};