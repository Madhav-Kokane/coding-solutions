# Majority Element

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an array `nums` of size `n`, return  *the majority element*.

The majority element is the element that appears more than `⌊n / 2⌋` times. You may assume that the majority element always exists in the array.

 

 **Example 1:** 

```
Input: nums = [3,2,3]
Output: 3

```

 **Example 2:** 

```
Input: nums = [2,2,1,1,1,2,2]
Output: 2

```

 

 **Constraints:** 

- n == nums.length
- 1 <= n <= 5 * 104
- -109 <= nums[i] <= 109
- The input is generated such that a majority element will exist in the array.

 

 **Follow-up:**  Could you solve the problem in linear time and in `O(1)` space?

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 42.1 MB (beats 5.36%)  
**Submitted:** 2026-09-23T08:34:30.139Z  

```cpp
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int ele=nums[0];
        int count=1;

        for(int i=1;i<n;i++){
            if(count==0){
                ele=nums[i];
            }
            
            if(nums[i] == ele){
                count++;
            }else{
                count--;
            }
        }
        return ele;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/majority-element/)