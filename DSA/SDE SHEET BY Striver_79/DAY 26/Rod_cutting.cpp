class Solution {
public:
    int dp[101][101];
    
    int solve(int start, int end, vector<int>& cuts, int cs, int ce){
        if(cs>ce)
            return 0;
        if(dp[cs][ce] != -1)
            return dp[cs][ce];
        int m = INT_MAX;
        for(int i = cs; i <= ce; i++)
            m = min(m, (end - start) + solve(start, cuts[i], cuts, cs, i-1) + 
                    solve(cuts[i], end, cuts, i+1, ce));
        return dp[cs][ce] = m;
    }
    
    int minCost(int n, vector<int>& cuts) {
        memset(dp, -1, sizeof(dp));
        sort(cuts.begin(), cuts.end());
        return solve(0, n, cuts, 0, cuts.size()-1);
    }

};