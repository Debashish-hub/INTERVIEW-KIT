int findMSB(int n){
	// Write your code here
    int ans = 1;
    while(n != 1){
        n = n/2;
        ans *= 2;
    }
    return ans;
}