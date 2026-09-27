# Majority Element II

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an integer array of size `n`, find all elements that appear more than `⌊n / 3⌋` times.

 

 **Example 1:** 

```
Input: nums = [3,2,3]
Output: [3]

```

 **Example 2:** 

```
Input: nums = [1]
Output: [1]

```

 **Example 3:** 

```
Input: nums = [1,2]
Output: [1,2]

```

 

 **Constraints:** 

- 1 <= nums.length <= 5 * 104
- -109 <= nums[i] <= 109

 

 **Follow up:**  Could you solve the problem in linear time and in `O(1)` space?

## Solution

**Language:** C++  
**Runtime:** 3 ms (beats 50.49%)  
**Memory:** 26.5 MB (beats 23.32%)  
**Submitted:** 2026-09-27T02:33:07.358Z  

```cpp
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();

        unordered_map<int,int> hashMap;
        for(auto it : nums){
            hashMap[it]++;
        }

        int req=n/3;
        vector<int> result;
        for(auto it : hashMap){
            if(it.second > req){
                result.push_back(it.first);
            }
        }
        return result;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/majority-element-ii/)