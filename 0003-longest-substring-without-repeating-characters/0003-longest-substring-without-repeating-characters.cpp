class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char>op;
      //  int curr = 1;
        int maxi = 0;
        int j=0;
        for(int i=0;i<s.size();i++){
             if(op.find(s[i])!=op.end()){
                 while(op.find(s[i])!=op.end()){
                     op.erase(s[j]);
                      j++;             
                 }
             }
            op.insert(s[i]);
            maxi=max(maxi,i-j+1);
             
         }
        return maxi;
    }
};