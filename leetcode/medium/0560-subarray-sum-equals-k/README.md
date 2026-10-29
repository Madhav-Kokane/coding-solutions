# Subarray Sum Equals K

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an array of integers `nums` and an integer `k`, return  *the total number of subarrays whose sum equals to*  `k`.

A subarray is a contiguous  **non-empty**  sequence of elements within an array.

 

 **Example 1:** 

```
Input: nums = [1,1,1], k = 2
Output: 2

```

 **Example 2:** 

```
Input: nums = [1,2,3], k = 3
Output: 2

```

 

 **Constraints:** 

- 1 <= nums.length <= 2 * 104
- -1000 <= nums[i] <= 1000
- -107 <= k <= 107

## Solution

**Language:** C++  
**Runtime:** 41 ms (beats 63.92%)  
**Memory:** 45.1 MB (beats 80.15%)  
**Submitted:** 2026-10-29T12:52:56.175Z  

```cpp
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> hashMap;
        int count=0;
        int preSum=0;
        hashMap[0]=1;

        for(auto it : nums){
            preSum=preSum+it;
            int required=preSum-k;

            if(hashMap.find(required) != hashMap.end()){
                count+= hashMap[required];
            }

            hashMap[preSum]++;
        }
        return count;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/subarray-sum-equals-k/)