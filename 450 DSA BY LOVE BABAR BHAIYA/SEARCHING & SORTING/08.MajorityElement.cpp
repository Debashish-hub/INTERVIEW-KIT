class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int i = 0, count = 0;
        for(int num : nums){
            if(count == 0){
                i = num;
            }
            if(i == num)count++;
            else count--;
        }
        return i;
    }
};