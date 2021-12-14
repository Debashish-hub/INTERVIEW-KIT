int Solution::solve(string s) {
    int l=0;int n=s.length();
    int r=n-1;int ans=0;
    while(l<=r){
        if(s[l]!=s[r]){
            if(l==0)
                r--;
            else
                l=0;
                ans=n-r-1;
        }
        else{
            r--;
            l++;
        }
    }
    return ans;
}
