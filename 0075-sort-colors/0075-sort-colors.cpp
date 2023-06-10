class Solution {
public:
    void sortColors(vector<int>& nums) {
        int m = 0,n = 0, s = nums.size()-1;
        while(m<=s){
            if(nums[m]==0){
                swap(nums[m++],nums[n++]);
            }
            else if(nums[m]==1){
                m++;
            }
            else{
               swap(nums[m],nums[s--]);
            }
        }
    }
};