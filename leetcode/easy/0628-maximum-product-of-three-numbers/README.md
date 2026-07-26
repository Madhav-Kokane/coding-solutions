# Maximum Product of Three Numbers

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an integer array `nums`,  *find three numbers whose product is maximum and return the maximum product*.

 

 **Example 1:** 

```
Input: nums = [1,2,3]
Output: 6

```

 **Example 2:** 

```
Input: nums = [1,2,3,4]
Output: 24

```

 **Example 3:** 

```
Input: nums = [-1,-2,-3]
Output: -6

```

 

 **Constraints:** 

- 3 <= nums.length <= 104
- -1000 <= nums[i] <= 1000

## Solution

**Language:** Java  
**Runtime:** 18 ms (beats 5.34%)  
**Memory:** 48.3 MB (beats 25.98%)  
**Submitted:** 2026-07-26T09:38:02.209Z  

```java
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
```

---

[View on LeetCode](https://leetcode.com/problems/maximum-product-of-three-numbers/)