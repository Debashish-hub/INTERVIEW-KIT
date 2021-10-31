class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m-1, j = n-1, x = m+n-1;
        while(i>=0  && j>=0){
            if(nums1[i] > nums2[j]){
                nums1[x] = nums1[i];
                i--;
                x--;
            }else{
                nums1[x] = nums2[j];
                j--;
                x--;
            }
        }
        while(j >= 0){
            nums1[x] = nums2[j];
            x--;
            j--;
        }
    }
};