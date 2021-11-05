vector<int> Solution::spiralOrder(const vector<vector<int> > &A) {
    int dir = 0;
    vector<int> B;
    int m = A.size();
    int n = A[0].size();
    int t=0, l=0, b = m-1, r=n-1;
    while(t<=b && l<=r){
        if(dir==0){
            for(int i=l; i<=r; i++){
                B.push_back(A[t][i]);
            }
            t++;
            dir=1;
        }
        else if(dir==1){
            for(int i=t; i<=b; i++){
                B.push_back(A[i][r]);
            }
            r--;
            dir=2;
        }
        else if(dir==2){
            for(int i=r; i>=l; i--){
                B.push_back(A[b][i]);
            }
            b--;
            dir=3;
        }
        else if(dir==3){
            for(int i=b; i>=t; i--){
                B.push_back(A[i][l]);
            }
            l++;
            dir=0;
        }
        else break;
    }
    return B;
}
