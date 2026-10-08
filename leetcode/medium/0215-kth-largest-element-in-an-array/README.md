# Kth Largest Element in an Array

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an integer array `nums` and an integer `k`, return  *the*  `kth`  *largest element in the array*.

Note that it is the `kth` largest element in the sorted order, not the `kth` distinct element.

Can you solve it without sorting?

 

 **Example 1:** 

```
Input: nums = [3,2,1,5,6,4], k = 2
Output: 5

```

 **Example 2:** 

```
Input: nums = [3,2,3,1,2,4,5,5,6], k = 4
Output: 4

```

 

 **Constraints:** 

- 1 <= k <= nums.length <= 105
- -104 <= nums[i] <= 104

## Solution

**Language:** C++  
**Runtime:** 58 ms (beats 10.51%)  
**Memory:** 75.5 MB (beats 16.89%)  
**Submitted:** 2026-10-08T06:31:41.976Z  

```cpp
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n=nums.size();
        priority_queue<int> pq;

        for(auto it : nums){
            pq.push(it);
        }

        while(k>1){
            pq.pop();
            k--;
        }
        return pq.top();
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/kth-largest-element-in-an-array/)