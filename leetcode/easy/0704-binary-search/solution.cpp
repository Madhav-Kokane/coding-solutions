class Solution {
public:
    int binarySearch(int start,int end,vector<int>& nums,int target){

        if(start>end){
            return -1;
        }

        int mid=start+(end-start)/2;
        if(nums[mid] == target){
            return mid;
        }

        if(nums[mid] > target){
            return binarySearch(start,mid-1,nums,target);
        }

        if(nums[mid] < target){
            return binarySearch(mid+1,end,nums,target);
        }

        return -1;
    }
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        return binarySearch(0,n-1,nums,target);
    }
};