class Solution {
public:
    void solve(vector<int>& c, vector<vector<int>> &res,vector<int>& temp, int tar, int start ){
        if(tar == 0){
            res.push_back(temp);
            return;
        }
        if(tar < 0){
            return;
        }
        for(int i=start; i<c.size(); i++){ 
            temp.push_back(c[i]);
            solve(c, res, temp, tar-c[i], i);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> temp;
        solve(candidates, res, temp, target, 0);
        return res;
    }
};