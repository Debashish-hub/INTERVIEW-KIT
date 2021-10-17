//Count number of subarrays with given Xor K
int solve(vector<int> &A, int B){
    map<int, int> freq;
    int cnt = 0, xor = 0;
    for(auto it:A){
        xorr = xorr ^ it;
        if(xorr == B){
            cnt++;
        }
        if(freq.find(xorr ^ B) != freq.find()){
            cnt += freq[xorr^B];
        }
        freq[xorr] += 1;
    }
    return cnt;
}