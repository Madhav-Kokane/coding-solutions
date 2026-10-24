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
**Runtime:** 57 ms (beats 10.59%)  
**Memory:** 75.8 MB (beats 6.82%)  
**Submitted:** 2026-10-24T13:39:08.934Z  

```cpp
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq;

        for(auto it: nums){
            pq.push(it);
        }

        int i=1;
        while(i<k){
            pq.pop();
            i++;
        }

        return pq.top();
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/kth-largest-element-in-an-array/)