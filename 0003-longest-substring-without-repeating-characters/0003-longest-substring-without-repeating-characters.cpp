class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      unordered_set<char>ans;
      int left=0,right=0,n=s.size(),maxLength=0;
      while(right<n){
          while(ans.find(s[right])!=ans.end()){
              ans.erase(s[left++]);
          }
          maxLength = max(maxLength,right-left+1);
          ans.insert(s[right]);
          right++;
          
      }
        return maxLength;
   }
};