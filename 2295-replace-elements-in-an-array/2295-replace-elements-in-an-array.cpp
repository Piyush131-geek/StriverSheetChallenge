class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& operations) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]=i;
        }
        for(int i=0;i<operations.size();i++)
        {
            int ind=mp[operations[i][0]];
            int withChange=operations[i][1];
           nums[ind]=withChange;
            //mp.erase(nums[ind]);
            mp[withChange]=ind;
        }
        return nums;
    }
};