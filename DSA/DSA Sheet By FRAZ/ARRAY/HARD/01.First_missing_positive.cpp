class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        for(int i=0; i<n; i++){
            if(i+1==nums[i]) continue;
            int x = nums[i];
            while(x>=1 && x<=n && x!=nums[x-1]){
                swap(x, nums[x-1]);
            }
        }
        for(int i=0; i<nums.size(); i++){
            if(i+1!=nums[i])    
                return i+1;
        }
        return n+1;
    }
};



