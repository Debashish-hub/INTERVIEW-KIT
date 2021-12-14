int Solution::repeatedNumber(const vector<int> &A) {
    int n = A.size();
    int s = A[0], f = A[0];
    do{
        s = A[s];
        f = A[A[f]];
    }while(s != f);
    s = A[0];
    while(s != f){
        s = A[s];
        f = A[f];
    }
    return s;
}
