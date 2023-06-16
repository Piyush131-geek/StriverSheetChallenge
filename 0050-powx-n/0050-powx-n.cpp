class Solution {
public:
    double pow(double x , int n){
        if(n==0 || x==1) return 1;
        double ans = pow(x,n/2);
        if(n%2==0){
            return ans*ans;
        }
        else{
            return x * ans * ans;
        }
    }
    double myPow(double x, int n) {
        double ans = pow(x,n);
        if(n<0){
            return 1.0/ans;
        }
        return ans;
    }
};