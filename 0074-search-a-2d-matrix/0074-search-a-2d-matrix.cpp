class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int c = 0,d = m-1;   // assuming we are at last element of the first row easy to make decisions
        while(c<n && d>=0){              
            int curr = matrix[c][d];
            if(curr==target) return true; 
            if(curr<target) c++;
            else d--;
        }
        return false;
    }
};