# Find First and Last Position of Element in Sorted Array

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an array of integers `nums` sorted in non-decreasing order, find the starting and ending position of a given `target` value.

If `target` is not found in the array, return `[-1, -1]`.

You must write an algorithm with `O(log n)` runtime complexity.

 

 **Example 1:** 

```
Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]

```

 **Example 2:** 

```
Input: nums = [5,7,7,8,8,10], target = 6
Output: [-1,-1]

```

 **Example 3:** 

```
Input: nums = [], target = 0
Output: [-1,-1]

```

 

 **Constraints:** 

- 0 <= nums.length <= 105
- -109 <= nums[i] <= 109
- nums is a non-decreasing array.
- -109 <= target <= 109

## Solution

**Language:** Java  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 48.1 MB (beats 71.96%)  
**Submitted:** 2026-08-22T06:25:43.035Z  

```java
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
```

---

[View on LeetCode](https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/)