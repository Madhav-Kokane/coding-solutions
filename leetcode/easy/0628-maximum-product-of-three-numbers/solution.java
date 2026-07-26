class Solution {
    public int maximumProduct(int[] nums) {
        Arrays.sort(nums);
        int len=nums.length;
        /*
        if(nums[0] > 0){
            return nums[len-1]*nums[len-2]*nums[len-3];
        }
        else if(nums[len-1] < 0){
            return nums[len-1]*nums[len-2]*nums[len-3];
        }else if(nums[0]*nums[1] > nums[len-2]*nums[len-3]){
            return nums[0]*nums[1]*nums[len-1];
        }else{
            return nums[len-1]*nums[len-2]*nums[len-3];
        }
        */

        int sum1=nums[len-1]*nums[len-2]*nums[len-3];
        int sum2=nums[0]*nums[1]*nums[len-1];
        return Math.max(sum1,sum2);
    }
}