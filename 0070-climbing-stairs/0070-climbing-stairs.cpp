class Solution {
public:
    int climbStairs(int n) {
        int first = 0; 
        int second = 1;
        int third =  0; 
        for(int i=0;i<n;i++){
           // cout<<"ander";
            third = first + second;
            first = second;
            second = third;
        }
        return third;
    }
};