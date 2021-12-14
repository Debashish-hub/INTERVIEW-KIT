void Solution::rotate(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    for(int i=0; i<A.size(); i++){
        for(int j=i+1; j<A[0].size(); j++){
            swap(A[i][j], A[j][i]);
        }
    }
    for(int i=0; i<A.size(); i++){
        long long low = 0, high = A.size() - 1;
        while (low < high) {
            swap(A[i][low], A[i][high]);
            low++;
            high--;
        }
    }
}
