class Solution {
public:
    int trap(vector<int>& height) {
        int n= height.size(), left = 0, right = height.size() - 1, lmax = 0, rmax = 0, res = 0;
        while(left < right){
            if(height[left] <= height[right]){
                if(height[left] >= lmax){
                    lmax = height[left];
                }else{
                    res += lmax - height[left];
                }
                left++;
            }else{
                if(height[right] >= rmax){
                    rmax = height[right];
                }else{
                    res += rmax - height[right];
                }
                right--;
            }
        }
        return res;
    }
};