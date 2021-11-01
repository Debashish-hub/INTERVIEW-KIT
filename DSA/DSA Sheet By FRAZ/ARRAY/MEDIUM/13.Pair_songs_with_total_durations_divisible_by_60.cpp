class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        unordered_map<int,int> mp;
        int ans = 0;
        for(int i=0; i<time.size(); i++){
            int x = time[i] % 60;
            int y = (60 - x) % 60;
            ans += mp[y];
            mp[x]++;
        }
        return ans;
    }
};