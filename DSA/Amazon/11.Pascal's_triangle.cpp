vector<vector<int> > Solution::solve(int A) {
    vector<vector<int>> ans;
    for(int i=0;i<A;i++){
        vector<int> v;
        long long int C=1;
        v.push_back(1);
        for(int j=1;j<=i;j++){
            C=(C*(i-j+1))/j;
            v.push_back(C);
        }
        ans.push_back(v);
    }
    return ans;
}
