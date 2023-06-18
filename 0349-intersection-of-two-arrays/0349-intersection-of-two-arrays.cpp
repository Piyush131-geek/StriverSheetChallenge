class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>ans;
        vector<int>op;
        for(int i=0;i<nums1.size();i++){
            ans[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++){
            if(ans.find(nums2[i])!=ans.end()){
                op.push_back(nums2[i]);
                ans.erase(nums2[i]);
            }  
        }
        return op;
    }
};