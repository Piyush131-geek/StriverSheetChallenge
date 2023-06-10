class Solution {
public:
    int maxProfit(vector<int>& prices) {
    //      int maxProfit = 0;
    //      int mini = INT_MAX;
    //      for(int i=0;i<prices.size();i++){
    //          mini=min(mini,prices[i]);
    //          maxProfit = max(maxProfit,prices[i]-mini);
    //      }
    //     return maxProfit;
    // }.size();i++
    //     int maxi=0;
    //     for(int i=0;i<prices.size()-1;i++){
    //         for(int j=i+1;j<prices.size();j++){
    //             if(prices[i]<prices[j]){
    //                 maxi=max(maxi,prices[j]-prices[i]);
    //             }
    //         }
    //     }
    //     return maxi;
    // }
        int n=prices.size();
        int arr[n];
        arr[n-1] = prices[n-1];
        for(int i=n-2;i>=0;i--){
            arr[i] = max(prices[i],arr[i+1]);
        }
        int maxi=0;
        for(int i=0;i<n;i++){
            maxi=max(maxi,arr[i]-prices[i]);
        }
        return maxi;
    }
        
};