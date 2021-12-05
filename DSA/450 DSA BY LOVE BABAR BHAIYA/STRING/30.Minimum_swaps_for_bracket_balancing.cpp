int minimumNumberOfSwaps(string S){
        // code here 
        int open = 0, close= 0, u = 0, ans = 0;
        for(int i=0; i<S.length(); i++){
            char c = S[i];
            if(c == ']'){
                close++;
            }else{
                if(u > 0){
                    ans+= u;
                }
                open++;
            }
            u = close - open;
        }
        return ans;
    }