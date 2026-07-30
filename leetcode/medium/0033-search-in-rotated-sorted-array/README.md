# Search in Rotated Sorted Array

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

There is an integer array `nums` sorted in ascending order (with  **distinct**  values).

Prior to being passed to your function, `nums` is  **possibly left rotated**  at an unknown index `k` (`1 <= k < nums.length`) such that the resulting array is `[nums[k], nums[k+1],..., nums[n-1], nums[0], nums[1],..., nums[k-1]]` (**0-indexed**). For example, `[0,1,2,4,5,6,7]` might be left rotated by `3` indices and become `[4,5,6,7,0,1,2]`.

Given the array `nums`  **after**  the possible rotation and an integer `target`, return  *the index of* `target` *if it is in* `nums` *, or* `-1` *if it is not in* `nums`.

You must write an algorithm with `O(log n)` runtime complexity.

 

 **Example 1:** 

```
Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4

```

 **Example 2:** 

```
Input: nums = [4,5,6,7,0,1,2], target = 3
Output: -1

```

 **Example 3:** 

```
Input: nums = [1], target = 0
Output: -1

```

 

 **Constraints:** 

- 1 <= nums.length <= 5000
- -104 <= nums[i] <= 104
- All values of nums are unique.
- nums is an ascending array that is possibly rotated.
- -104 <= target <= 104

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 15.1 MB (beats 68.93%)  
**Submitted:** 2026-07-30T06:31:18.189Z  

```cpp
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
```

---

[View on LeetCode](https://leetcode.com/problems/search-in-rotated-sorted-array/)