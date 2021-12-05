long long int count(int S[], int m, int n) {

        // code here.
       vector<long long> dp(n+1);
       dp[0] = 1;
       for (int i=0; i<m; ++i) {
           for(int j=S[i]; j<=n; ++j) {
               dp[j] += dp[j - S[i]];
               
           }
       }
       return dp[n];
    }