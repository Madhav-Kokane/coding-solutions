class Solution {
    public int maxProduct(int[] nums) {
        int firstMax=Integer.MIN_VALUE;
        int secondMax=Integer.MIN_VALUE-1;

        int n=nums.length;
        for(int i=0;i<n;i++){
            if(nums[i]>firstMax){
                secondMax=firstMax;
                firstMax=nums[i];
            }else if(nums[i]>secondMax && nums[i]<=firstMax){
                secondMax=nums[i];
            }
        }
        return (firstMax-1)*(secondMax-1);
    }
}