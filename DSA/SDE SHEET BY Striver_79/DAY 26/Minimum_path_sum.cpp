class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size(); int n = grid[0].size();
        int dp[m][n];
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(i==0 && j==0){ 
                    dp[0][0] = grid[0][0]; 
                }else if(i==0){ 
                    dp[0][j] = dp[0][j-1] + grid[0][j]; 
                }else if(j==0){ 
                    dp[i][0] = dp[i-1][0] + grid[i][0]; 
                }else{
                    dp[i][j] = min(dp[i-1][j], dp[i][j-1]) + grid[i][j] ; 
                }
            }
        }
        return dp[m-1][n-1];    
    }
};