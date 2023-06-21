class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int i=0;
        int n=nums.size();
        while(i<n-1 && nums[i]<=nums[i+1]){
           i++;
        }
        if(i==n-1) return true;
         i=0;
         while(i<n-1 && nums[i]>=nums[i+1]){
           i++;
        }
        if(i==n-1) return true;
        return false;
        
    }
};