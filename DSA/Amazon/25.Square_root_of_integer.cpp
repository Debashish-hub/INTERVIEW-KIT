int Solution::sqrt(int A) {
    int low = 1, high = A, ans;
    if(A == 0){
        return A;
    }
    while(low <= high){
        int mid = (low + high)/2;
        if(mid <= A/mid){
            ans = mid;
            low = mid+1;
        }else{
            high = mid-1;
        }
    }
    return ans;
}
