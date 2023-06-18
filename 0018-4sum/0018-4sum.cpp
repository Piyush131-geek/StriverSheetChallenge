    class Solution {
    public:
        vector<vector<int>> fourSum(vector<int>& nums, int target) {
            sort(nums.begin(),nums.end());
            vector<vector<int>>ans;
             for(int i=0;i<nums.size();i++){
                 if(i>0 && nums[i]==nums[i-1]) continue;
                 for(int j=i+1;j<nums.size();j++){
                     if(j!=i+1 && nums[j]==nums[j-1]) continue;
                     int st = j + 1;
                     int en = nums.size()-1;
                     while(st<en){
                     long long int sum = nums[i] + nums[j];
                        sum+= nums[st] + nums[en];
                     if(sum==target){
                         ans.push_back({nums[i] ,nums[j] ,nums[st] , nums[en]});
                         st++;
                         en--;
                         while(st<en && nums[st]==nums[st-1]) st++;
                         while(st<en && nums[en]==nums[en+1]) en--;
                     }
                     else if(sum<target) st++;
                        else en--;
                  }

                 }
             }
            return ans;
        }
    };