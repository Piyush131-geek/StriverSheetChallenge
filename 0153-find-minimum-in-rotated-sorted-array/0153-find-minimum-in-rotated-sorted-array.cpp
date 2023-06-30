class Solution {
public:
    int findMin(vector<int>& nums) {
        int i=0;
        int j=nums.size()-1;
        if(nums[nums.size()-1]>nums[0]) return nums[0];
        while(i<j){
            int mid=i+(j-i)/2;
            if(nums[mid]>=nums[0]){
                i=mid+1;
            }
            else {
               j = mid;
            }
        }
        return nums[j];
    }
};