unordered_map<string, int> dp;
    int solve(string A, vector<string> &B){
        int n = A.length();
        if(n == 0){
            return 1;
        }
        if(dp[A] != 0){
            return dp[A];
        }
        for(int i=1; i<=n; i++){
            int x = 0;
            string s = A.substr(0,i);
            for(int j=0; j<B.size(); j++){
                if(s.compare(B[j]) == 0){
                    x = 1;
                    break;
                }
            }
            if(x == 1 && solve(A.substr(i,n-i), B) == 1){
                return dp[A] = 1;
            }
        }
        return dp[A] = -1;
    }
    int wordBreak(string A, vector<string> &B) {
        //code here
        int ans = solve(A, B);
        if(ans == 1){
            return 1;
        }else{
            return 0;
        }
    }