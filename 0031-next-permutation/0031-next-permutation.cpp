class Solution {
public:
    void nextPermutation(vector<int>& nums) {
         int n = nums.size();
         int inflexP = -1;
         for(int i = n-2 ; i >=0 ; i--){
            if(nums[i] < nums[i+1]){
                inflexP = i;
                break;
            }
         }
         for(int i = n-1 ; i>=inflexP && inflexP != -1 ; i--){
             if(nums[i]>nums[inflexP]) {
                 swap(nums[i],nums[inflexP]);
                 break;
             }
         }
         reverse(nums.begin()+inflexP+1,nums.end());
    }
};