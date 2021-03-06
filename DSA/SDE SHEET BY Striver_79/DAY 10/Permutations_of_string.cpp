//Print all permutations of a string/array	

class Solution {
public:
    void permutation(vector<int>&nums,int x,vector<vector<int>>&result){
        if(x==nums.size()){
            result.push_back(nums);
            return;
        }
        for(int i=x;i<nums.size();i++){
            swap(nums[x],nums[i]);
            permutation(nums,x+1,result);
            swap(nums[x],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>result;
        permutation(nums,0,result);
        return result;
    }
};

