class Solution {
    public int[] runningSum(int[] nums) {
        int size=nums.length;
        int result[]=new int[size];

        int temp=0;
        for(int i=0;i<size;i++){
            temp+=nums[i];
            result[i]=temp;
        }
        return result;
    }
}