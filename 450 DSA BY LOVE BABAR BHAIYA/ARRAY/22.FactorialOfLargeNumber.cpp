void multiply(int x, vector<int>&ans){
        int carry = 0;  
        for (int i=0; i<ans.size(); i++){
            int prod = ans[i] * x + carry;
            ans[i] = prod % 10;  
            carry  = prod/10;    
        }
        while (carry){
            ans.push_back(carry%10);
            carry = carry/10;
        }
        
    }
    vector<int> factorial(int N){
        // code here
        vector<int> ans;
        ans.push_back(1);
        int size = 1;
        for(int i=2; i<=N; i++){
            multiply(i, ans);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }