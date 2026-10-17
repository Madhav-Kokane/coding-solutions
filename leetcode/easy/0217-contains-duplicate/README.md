# Contains Duplicate

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an integer array `nums`, return `true` if any value appears  **at least twice**  in the array, and return `false` if every element is distinct.

 

 **Example 1:** 

 **Input:**  nums = [1,2,3,1]

 **Output:**  true

 **Explanation:** 

The element 1 occurs at the indices 0 and 3.

 **Example 2:** 

 **Input:**  nums = [1,2,3,4]

 **Output:**  false

 **Explanation:** 

All elements are distinct.

 **Example 3:** 

 **Input:**  nums = [1,1,1,3,3,4,3,2,4,2]

 **Output:**  true

 

 **Constraints:** 

- 1 <= nums.length <= 105
- -109 <= nums[i] <= 109

## Solution

**Language:** Java  
**Runtime:** 17 ms (beats 87.71%)  
**Memory:** 108 MB (beats 63.67%)  
**Submitted:** 2026-10-17T08:58:05.902Z  

```java
class Solution {
    public boolean containsDuplicate(int[] nums) {
        HashSet<Integer> hashSet=new HashSet<>();
        int n=nums.length;
        for(int it : nums){
            if(hashSet.contains(it)){
                return true;
            }
            hashSet.add(it);
        }
        return false;
    }
}
```

---

[View on LeetCode](https://leetcode.com/problems/contains-duplicate/)