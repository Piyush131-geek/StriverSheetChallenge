class Solution {
public:
    int majorityElement(vector<int>& nums) {
       // int first = nums[0];
       // int count = 0;
       // for(int i=0;i<nums.size();i++){
       //     if(first == nums[i]){
       //         count++;
       //     }
       //      else {
       //          count--;
       //          if(count==0){
       //              first = nums[i];
       //              count=1;
       //          }
       //      }
       //     }
       //     return first;
        
        sort(nums.begin(),nums.end());
        int count = 0;
        int first = nums[0];
        for(int i=0;i<nums.size();i++){
            if(first == nums[i]){
                count++;
                if(count>nums.size()/2){
                    return first;
                }
            }
            else{
                first = nums[i];
                count = 1;
            }
        }
        return -1;
    }
};