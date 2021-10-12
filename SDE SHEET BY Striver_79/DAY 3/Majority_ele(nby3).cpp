class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int size = nums.size();
        int n1 = -1, n2 = -1, c1 = 0, c2 = 0;
        for(int i=0; i<size; i++){
            if(n1 == nums[i]){
                c1++;
            }else if(n2 == nums[i]){
                c2++;
            }else if(c1 == 0){
                c1 = 1;
                n1 = nums[i];
            }else if(c2 == 0){
                c2 = 1;
                n2 = nums[i];
            }else{
                c1--;
                c2--;
            }
        }
        vector<int> ans;
        c1 = 0, c2 = 0;
        for(int i=0; i<size; i++){
            if(nums[i] == n1){
                c1++;
            }else if(nums[i] == n2){
                c2++;
            }
        }
        if(c1 > size/3){
            ans.push_back(n1);
        }
        if(c2 > size/3){
            ans.push_back(n2);
        }
        return ans;
    }
};