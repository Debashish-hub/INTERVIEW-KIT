int findDuplicate(vector<int>& nums) {
    int n=nums.size()-1;
    int low=1;
    int high=n;
    int mid;
    while(low<high){
        mid=(low+high)/2;
        int count=0;
        for(int num:nums){
            if(num<=mid) count++;
        }
        if(count>mid) high=mid;
        else low=mid+1; 
    }
    return low;
}

//-------------------------------------------------------------------------------------------------

int floydSolution(vector<int>& nums) {
        int hare = nums[0], tortoise = nums[0];
        
        do {
            hare = nums[nums[hare]];
            tortoise = nums[tortoise];
        } while(hare != tortoise);
        
        tortoise = nums[0];
        while(hare != tortoise) {
            hare = nums[hare];
            tortoise = nums[tortoise];
        }
        
        return hare;
    }