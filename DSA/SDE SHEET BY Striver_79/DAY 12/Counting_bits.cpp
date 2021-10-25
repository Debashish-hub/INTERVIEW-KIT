class Solution {
public:
    inline bool ispowerof2(int n){
        return (n & (n-1)) == 0;
    }
    
    vector<int> countBits(int num) {
        vector<int> dp(num+1);
        
        dp[0]=0;
        
        if(num>=1) 
            dp[1]=1;

        int curr=2;
        int nearest=2;
        while(curr<=num)
        {
            nearest = ispowerof2(curr) ? curr  : nearest; 
            dp[curr] = 1 + dp[curr-nearest]; 
            curr++;
        }
        
        return dp;
    }
};