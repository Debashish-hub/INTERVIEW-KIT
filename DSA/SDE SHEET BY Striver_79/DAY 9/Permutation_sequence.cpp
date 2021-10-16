class Solution {
public:
    string getPermutation(int n, int k) {
        int fact = 1;
        vector<int> no;
        for(int i=1; i<n; i++){
            fact = fact*i;
            no.push_back(i);
        }
        no.push_back(n);
        string ans = "";
        k = k-1;
        while(true){
            ans += to_string(no[k/fact]);
            no.erase(no.begin() + k/fact);
            if(no.size() == 0){
                break;
            }
            k = k%fact;
            fact = fact/no.size();
        }
        return ans;
    }
};