long long findMinDiff(vector<long long> a, long long n, long long m){
        //code
        sort(a.begin(), a.end());
        long long int ans = INT_MAX;
        for (int i = 0; i <= n - m; i++) {
            ans = min(a[m + i - 1] - a[i], ans);
        }
        return ans;
    }   