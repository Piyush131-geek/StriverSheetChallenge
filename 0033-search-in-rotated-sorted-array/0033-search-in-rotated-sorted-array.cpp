class Solution {
public:
    int pivot(vector<int>& nums){
        int st=0;
        int en=nums.size()-1;
        while(st<en){
            int mid=st+(en-st)/2;
            if(nums[mid]>=nums[0]){
                st=mid+1;
            }
            else {
                en=mid;
            }
        }
        return en;
    }
    int Binary(vector<int>& nums,int st,int en,int target){
        int s=st;
        int e=en;
        while(s<=e){
            int mid = s+(e-s)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]<target) s=mid+1;
            else e=mid-1;
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
         int pivots = pivot(nums);
         if(target>=nums[pivots] && target<=nums[nums.size()-1]){
             return Binary(nums,pivots,nums.size()-1,target);
         }
         else {
             return Binary(nums,0,pivots-1,target);
         }
    }
};