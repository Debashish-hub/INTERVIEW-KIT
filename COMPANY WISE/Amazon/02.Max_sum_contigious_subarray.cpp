int Solution::maxSubArray(const vector<int> &A) {
    int max_sum = INT_MIN, sum = 0;
    for(int i=0; i<A.size(); i++){
        sum += A[i];
        max_sum = max(sum, max_sum);
        if(sum < 0){
            sum = 0;
        }
    }
    return max_sum;
}
