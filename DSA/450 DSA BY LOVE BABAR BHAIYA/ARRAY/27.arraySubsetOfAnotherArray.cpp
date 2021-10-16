string isSubset(int a1[], int a2[], int n, int m) {
    unordered_map<int,bool> mp;
    for(int i=0; i<n; i++){
        mp[a1[i]] = 1;
    }
    for(int i=0; i<m; i++){
        if(mp[a2[i]] != 1){
            return "No";
        }
    }
    return "Yes";
}