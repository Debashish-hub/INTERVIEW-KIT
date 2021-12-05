int dp[101][101];
    int solve(int a[], int i, int j){
        if(i>=j){
           return 0;
        }
        if(dp[i][j] != -1){
           return dp[i][j];
        }
        int ans = INT_MAX;
        for(int k=i; k<j; k++){
           int temp = solve(a, i, k) + solve(a, k+1, j) + a[i-1] * a[k] * a[j];
           ans = min(ans, temp);
           dp[i][j] = ans;
        }
        return dp[i][j];
    }
    int matrixMultiplication(int N, int arr[])
    {
        // code here
        memset(dp,-1,sizeof(dp));
        return solve(arr, 1, N-1);
    }