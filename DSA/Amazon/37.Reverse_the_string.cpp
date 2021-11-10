string Solution::solve(string A) {
    stringstream ss(A);
    string s;
    string ans="";    
    while(ss>>s){
        ans=s+" "+ans;
    }    
    ans.pop_back();
    return ans;
}
