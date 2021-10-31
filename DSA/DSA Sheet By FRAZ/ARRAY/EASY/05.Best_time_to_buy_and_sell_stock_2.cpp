class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lo = prices[0], hi = prices[0], i=0, ans = 0;
        while(i < prices.size()-1){
            while(i < prices.size()-1 && prices[i] >= prices[i+1]){
                i++;
            }
            lo = prices[i];
            while(i < prices.size()-1 && prices[i] <= prices[i+1]){
                i++;
            }
            hi = prices[i];
            ans += hi-lo;
        }
        return ans;
    }
};