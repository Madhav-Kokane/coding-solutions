class Solution {
    public int maxSubArray(int[] nums) {
        int maxSum=Integer.MIN_VALUE;
        int n=nums.length;
        int sumn=0;
        for(int i=0;i<n;i++){
            sumn += nums[i];
            maxSum=Math.max(sumn,maxSum);
            if(sumn<0){
                sumn=0;
            }

        }
        return maxSum;
    }
}