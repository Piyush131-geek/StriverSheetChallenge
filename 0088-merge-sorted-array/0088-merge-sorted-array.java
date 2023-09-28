class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
    int i=0;
    int j=0;
    int []ans = new int[m+n];
    int a=0;
    while(i<m && j<n){
        if(nums1[i]<=nums2[j]){
            ans[a++] = nums1[i++];
        }
        else{
            ans[a++] = nums2[j++];
        }

    }
    
    while(i<m) {
        ans[a++] = nums1[i++];
    }
         while(j<n) {
        ans[a++] = nums2[j++];
    }
    for(int k=0;k<(m+n);k++){
        nums1[k] = ans[k];
    }
   
}
};