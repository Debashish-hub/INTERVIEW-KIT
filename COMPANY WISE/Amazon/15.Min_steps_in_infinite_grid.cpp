int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int n = A.size();
    int ans = 0;
    for(int i = 0;i<n-1;i++)
    { 
        int x =  abs(A[i+1]-A[i]);
        int y = abs(B[i+1]-B[i]);
        if(x>y)
            swap(x,y);
        ans += x + (y - x);//it will take, when y > x  then x steps together and remaining 
                // y - x steps lonely

    }
    return ans;
}
