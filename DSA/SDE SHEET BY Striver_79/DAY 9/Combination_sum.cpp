//Combination sum-1	

class Solution {
public:
    vector<vector<int>> res;
    void sol(vector<int>& cand, vector<int>& temp, int tar, int start){
        
        if(tar<0){
            return;
        }
        if(tar==0){
            res.push_back(temp);
            return;
        }
        for(int i=start;i<cand.size();i++){
            
            temp.push_back(cand[i]);
            sol(cand,temp,tar-cand[i],i);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> temp;
      
        sol(candidates,temp,target,0);
        return res;
    }
};