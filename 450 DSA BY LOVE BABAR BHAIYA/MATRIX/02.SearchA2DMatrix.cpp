class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int size = matrix[0].size()-1;
        int c = 0;
        while(size >= 0 && c < matrix.size()){
            if(matrix[c][size] == target){
                return true;
            }else if(matrix[c][size] > target){
                size--;
            }else{
                c++;
            }
        }
        return false;
    }
};