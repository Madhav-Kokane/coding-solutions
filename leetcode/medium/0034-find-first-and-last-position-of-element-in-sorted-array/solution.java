class Solution {
    public int firstPosition(int[] nums,int target,int start,int end){
        int firstPos=-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid] < target){
                start=mid+1;
            }else if(nums[mid] > target){
                end=mid-1;
            }else{
                firstPos=mid;
                end=mid-1;
            }
        } 
        return firstPos;       
    }


    public int lastPosition(int[] nums,int target,int start,int end){
        int lastPos=-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid] < target){
                start=mid+1;
            }else if(nums[mid] > target){
                end=mid-1;
            }else{
                lastPos=mid;
                start=mid+1;
            }
        } 
        return lastPos;
    }
    public int[] searchRange(int[] nums, int target) {
        int n=nums.length-1;
        int first=firstPosition(nums,target,0,n);
        int last=lastPosition(nums,target,0,n);

        int[] ans={first,last};
        return ans;
    }
}