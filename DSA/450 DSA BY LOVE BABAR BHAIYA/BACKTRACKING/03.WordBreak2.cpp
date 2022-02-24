unordered_map<string,vector<string>> dp;
    vector<string> wordBreak(int n, vector<string>& dict, string s)
    {
        // code here
        if(dp.find(s) != dp.end())
            return dp[s];
        vector<string> ans;
        
        for(string w:dict)
        {
            if(s.substr(0,w.length()) == w)
            {
                if(w.length() == s.length())
                    ans.push_back(w);
                else
                {
                    vector<string> temp = wordBreak(n-1,dict,s.substr(w.length()));
                    for(string t:temp)
                    {
                        ans.push_back(w+" "+t);
                    }
                }
            }
        }
        return dp[s]=ans;
        
        
    }