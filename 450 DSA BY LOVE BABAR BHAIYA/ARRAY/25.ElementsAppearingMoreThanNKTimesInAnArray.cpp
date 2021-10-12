    int countOccurence(int arr[], int n, int k) {
        // Your code here
        int ans = 0;
        unordered_map<int,int> mp;
        for(int i=0; i<n; i++){
            mp[arr[i]]++;
        }
        for(auto x:mp){
            if(x.second > (n/k)){
                ans++;
            }
        }
        return ans;
    }