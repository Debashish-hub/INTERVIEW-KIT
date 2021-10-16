vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        vector<int> ans;
        int n = nums.size();
        int x = 0, res1 = 0, res2 = 0;
        for(int i=0; i<n; i++){
            x = x ^ nums[i];
        }
        int s = x & (~(x-1));
        for(int i=0; i<n; i++){
            if((nums[i] & s) != 0){
                res1 = res1 ^ nums[i];
            }else{
                res2 = res2 ^ nums[i];
            }
        }
        ans.push_back(res1);
        ans.push_back(res2);
        sort(ans.begin(), ans.end());
        return ans;
    }