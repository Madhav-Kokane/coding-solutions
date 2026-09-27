class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start=0;
        if(nums[nums.size()-1] < target){
            return nums.size();
        }
        int end=nums.size()-1;
        while(start<end){
            int mid=start+(end-start)/2;
            if(nums[mid] == target){
                return mid;
            }else if(nums[mid] < target){
                start=mid+1;
            }else{
                end=mid;
            }
        }
        return end;
    }
};