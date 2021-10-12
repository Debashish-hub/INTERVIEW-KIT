class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> hs;
        for(int num : nums){
            hs.insert(num);
        }
        int l = 0;
        for(int num : nums){
            if(!hs.count(num-1)){
                int cn = num, cs = 1;
                while(hs.count(cn+1)){
                    cn++;
                    cs++;
                }
                l = max(l,cs);
            }
        }
        return l;
    }
};