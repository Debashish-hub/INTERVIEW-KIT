class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int sum = 0;
        for(int i=0; i<k; i++){
            sum += cardPoints[i];
        }
        int ans = sum;
        int j = cardPoints.size()-1;
        for(int i=0; i<k; i++){
            sum += cardPoints[j];
            sum -= cardPoints[k-i-1];
            ans = max(ans, sum);
            j--;
        }
        return ans;
    }
};