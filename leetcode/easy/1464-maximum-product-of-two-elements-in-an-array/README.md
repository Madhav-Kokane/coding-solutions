# Maximum Product of Two Elements in an Array

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given the array of integers `nums`, you will choose two different indices `i` and `j` of that array.  *Return the maximum value of*  `(nums[i]-1)*(nums[j]-1)`.

 

 **Example 1:** 

```
Input: nums = [3,4,5,2]
Output: 12 
Explanation: If you choose the indices i=1 and j=2 (indexed from 0), you will get the maximum value, that is, (nums[1]-1) *(nums[2]-1) = (4-1)* (5-1) = 3*4 = 12. 

```

 **Example 2:** 

```
Input: nums = [1,5,4,5]
Output: 16
Explanation: Choosing the indices i=1 and j=3 (indexed from 0), you will get the maximum value of (5-1)*(5-1) = 16.

```

 **Example 3:** 

```
Input: nums = [3,7]
Output: 12

```

 

 **Constraints:** 

- 2 <= nums.length <= 500
- 1 <= nums[i] <= 10^3

## Solution

**Language:** Java  
**Runtime:** 1 ms (beats 66.20%)  
**Memory:** 44.3 MB (beats 86.08%)  
**Submitted:** 2026-07-27T14:22:37.566Z  

```java
class Solution {
    public int maxProduct(int[] nums) {
        int firstMax=Integer.MIN_VALUE;
        int secondMax=Integer.MIN_VALUE-1;

        int n=nums.length;
        for(int i=0;i<n;i++){
            if(nums[i]>firstMax){
                secondMax=firstMax;
                firstMax=nums[i];
            }else if(nums[i]>secondMax && nums[i]<=firstMax){
                secondMax=nums[i];
            }
        }
        return (firstMax-1)*(secondMax-1);
    }
}
```

---

[View on LeetCode](https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/)