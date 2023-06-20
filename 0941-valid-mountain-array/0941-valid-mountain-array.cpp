class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int i=0;
        int n=arr.size();
        while(i<n-1 && arr[i]<arr[i+1] ){
             i++;    
         }
        int j=arr.size()-1;
        while(j>0 && arr[j]<arr[j-1]){
            j--;
        }
        if(i==n-1||j==0) return false;
        if(i==j) return true;
        return false;
    }
};