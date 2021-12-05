class Solution {
public:
    bool subsetSum(vector<int>& nums, int w){
        int n = nums.size();
        int dp[n+1][w+1];
        for(int i=0; i<n+1; i++){
            for(int j=0; j<w+1; j++){
                if(i == 0){
                    dp[i][j] = 0;
                }else if(j == 0){
                    dp[i][j] = 0;
                }
            }
        }
        for(int i=1; i<n+1; i++){
            for(int j=1; j<w+1; j++){
                if(nums[i-1] <= j){
                    dp[i][j] = max(nums[i-1] + dp[i-1][j-nums[i-1]] , dp[i-1][j]);
                }else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        return dp[n][w] == w;
    }
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for(int i=0; i<nums.size(); i++){
            sum += nums[i];
        }
        if(sum % 2 != 0){
            return false;
        }else{
            return subsetSum(nums, sum/2);
        }
    }
};

