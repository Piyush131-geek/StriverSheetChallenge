class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
        if(arr.size()==0) return 0;
         unordered_set<int>op;
         for(auto x : arr)
         op.insert(x);
         int res = 1;
         for(auto x : op){
             if(op.find(x-1)==op.end()){
                 int ele = x; int count=1;
                 while(op.find(ele+1)!=op.end()){
                     count++;
                     ele++;
                 }
                 res=max(res,count);
             }
         }
        return res;
    }
  
};
