/**
 * @param {number[]} nums
 * @return {number}
 */
var pivotIndex = function(nums) {
    let sumPreffix=0;
    let sumSuffix =0;
    let pre = new Array(nums.length);
    let sue = new Array(nums.length);
    pre[0] = nums[0];
    sue[nums.length-1] = nums[nums.length-1];
    for(let i=1;i<nums.length;i++){
        pre[i] = pre[i-1]+nums[i];        
    }
    for(let i=nums.length-2;i>=0;i--){
        sue[i] = nums[i]+sue[i+1];        
    }
    for(let i=0;i<nums.length;i++){
        if(pre[i]==sue[i]) return i;
    }
    return -1;
        

};