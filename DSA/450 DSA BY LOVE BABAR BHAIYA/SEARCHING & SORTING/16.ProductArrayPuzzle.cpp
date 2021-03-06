vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       
        //code here  
        long long int temp =1 ;
        vector<long long int> ans(nums.size(), 1);
        for (int i = 0; i < n; i++) {
            ans[i] = temp;
            temp *= nums[i];
        }
        temp = 1;
      
        for (int i = n - 1; i >= 0; i--) {
            ans[i] *= temp;
            temp *= nums[i];
        }
        return ans;
    }