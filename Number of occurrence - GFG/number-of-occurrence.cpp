//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
		
		
int firstOccurenc(int arr[],int n , int x){
	    int st=0;
	    int en=n-1;
	    int ans=2;
	    while(st<=en){
	       int mid=st+(en-st)/2;
	       if(arr[mid]==x){
	           ans=mid;
	           en=mid-1;
	       }
	       else if(arr[mid]<x){
	           st=mid+1;
	       }
	       else{
	           en=mid-1;
	       }
	    }
	    return ans;
}
		
int lasttOccurenc(int arr[],int n , int x){
	    int st=0;
	    int en=n-1;
	    int ans=1;
	    while(st<=en){
	       int mid=st+(en-st)/2;
	       if(arr[mid]==x){
	           ans=mid;
	           st=mid+1;
	       }
	       else if(arr[mid]<x){
	           st=mid+1;
	       }
	       else{
	           en=mid-1;
	       }
	    }
	    return ans;
	}
	int count(int arr[], int n, int x) {
	     int st=firstOccurenc(arr,n,x);
	     int ls=lasttOccurenc(arr,n,x);
	     return ls-st+1;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends