class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if (n == 0)
            return 0;

        vector<vector<int>> dp(3, vector<int>(n, 0));
        for (int k = 1; k <= 2; k++)
        {
            int minPrice = prices[0];
            for (int i = 1; i < n; i++)
            {
                minPrice = min(minPrice, prices[i] - dp[k - 1][i - 1]);
                dp[k][i] = max(dp[k][i - 1], prices[i] - minPrice);
            }
        }
        return dp[2][n - 1];
    }
};