int Solution::maxArr(vector<int> &A) {
    int m1 = INT_MIN, n1 = INT_MAX, m2 = INT_MIN, n2 = INT_MAX;
    for(int i=0; i<A.size(); i++){
        m1 = max(A[i] + i, m1);
        n1 = min(A[i] + i, n1);
        m2 = max(A[i] - i, m2);
        n2 = min(A[i] - i, n2);
    }
    return max(m1-n1, m2-n2);
}
