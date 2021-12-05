int dp[201][201];
    int solve(int n, int k){
        if(k == 0 || k == 1 || n == 1){
            return k;
        }
        if(dp[n][k] != -1){
            return dp[n][k];
        }
        int ans = INT_MAX;
        for(int i=1; i<=k; i++){
            int t = 1 + max(solve(n-1, i-1), solve(n, k-i));
            ans = min(ans, t);
        }
        return dp[n][k] = ans;
    }
    int eggDrop(int n, int k) 
    {
        // your code here
        memset(dp, -1, sizeof(dp));
        return solve(n,k);
    }