vector<int> Solution::wave(vector<int> &A) {
    if(A.size() <= 1){
        return A;
    }
    sort(A.begin(),A.end());
    for(int i=0; i<A.size()-1; i+=2){
        if(A[i] < A[i+1]){
            swap(A[i], A[i+1]);
        }
    }
    return A;
}
