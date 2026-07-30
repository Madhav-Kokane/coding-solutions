class Solution {
public:
    
    int getPiviot(vector<int>& nums) {
        int start = 0;
        int end = nums.size() - 1;
        int mid = start + (end - start) / 2;
        while (start < end) {
            if (nums[mid] >= nums[0]) {
                start = mid + 1;
            } else {
                end = mid;
            }
            mid = start + (end - start) / 2;
        }
        return start;
    }

    int searchElement(vector<int>& nums, int target, int start, int end) {
        int ans = -1;
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (target < nums[mid]) {
                end = mid - 1;
            } else if (target > nums[mid]) {
                start = mid + 1;
            } else {
                ans = mid;
                break;
            }
        }
        return ans;
    }
    int search(vector<int>& nums, int target) {
        /*
        int piviot = getPiviot(nums);
        int start = 0;
        int end = nums.size() - 1;

        if (target >= nums[piviot] && target <= nums[end]) {
            return searchElement(nums, target, piviot, end);
        }
        return searchElement(nums, target, start, piviot - 1);
        */

        int start=0;
        int end=nums.size()-1;
        while(start<=end){
            int mid=start+(end-start)/2;

            if(nums[mid] ==  target){
                return mid;
            }

            if(nums[start]<=nums[mid]){
                if(target>=nums[start] && target<nums[mid]){
                    end=mid-1;
                }else{
                    start=mid+1;
                }
            }else{
                if(target > nums[mid] && target<=nums[end]){
                    start=mid+1;
                }else{
                    end=mid-1;
                }
            }
        }
        return -1;
    }
};