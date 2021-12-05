class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans = nums[0];
        int n = nums.size();
        int max_e = nums[0], min_e = nums[0];
        for(int i=1; i<n; i++){
            if(nums[i] < 0){
                swap(max_e, min_e);
            }
            max_e =  max(max_e * nums[i] , nums[i]);
            min_e = min(min_e * nums[i], nums[i]);
            ans = max(ans, max_e);
        }
        return ans;
    }
};