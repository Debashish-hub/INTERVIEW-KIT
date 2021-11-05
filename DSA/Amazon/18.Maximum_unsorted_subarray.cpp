vector<int> Solution::subUnsort(vector<int> &A) {
    int l = -1, r = -1, n = A.size();
    vector<int> ans;
    for(int i=0; i<n; i++){
        if(A[i] > A[i+1]){
            l = i;
            break;
        }
    }
    for(int i=n-1; i>=0; i--){
        if(A[i] < A[i-1]){
            r = i;
            break;
        }
    }
    int lmin = INT_MAX, rmax = INT_MIN;
    for(int i=l; i<=r; i++){
        lmin= min(lmin, A[i]);
        rmax = max(rmax, A[i]);
    }
    for(int i=0; i<=l; i++){
        if(A[i] > lmin){
            l = i;
        }
    }
    for(int i=r; i<n; i++){
        if(A[i] < rmax){
            r = i;
        }
    }
    if(l == -1 || r == -1){
        return {-1};
    }else{
        return {l,r};
    }

}
