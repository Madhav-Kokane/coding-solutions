# Divide Array Into Equal Pairs

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You are given an integer array `nums` consisting of `2 * n` integers.

You need to divide `nums` into `n` pairs such that:

- Each element belongs to exactly one pair.
- The elements present in a pair are equal.

Return `true`  *if nums can be divided into*  `n`  *pairs, otherwise return*  `false`.

 

 **Example 1:** 

```
Input: nums = [3,2,3,2,2,2]
Output: true
Explanation: 
There are 6 elements in nums, so they should be divided into 6 / 2 = 3 pairs.
If nums is divided into the pairs (2, 2), (3, 3), and (2, 2), it will satisfy all the conditions.

```

 **Example 2:** 

```
Input: nums = [1,2,3,4]
Output: false
Explanation: 
There is no way to divide nums into 4 / 2 = 2 pairs such that the pairs satisfy every condition.

```

 

 **Constraints:** 

- nums.length == 2 * n
- 1 <= n <= 500
- 1 <= nums[i] <= 500

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 17.2 MB (beats 70.26%)  
**Submitted:** 2026-07-11T08:58:36.814Z  

```cpp
class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int n=nums.size();
        /*
        unordered_map<int,int> hashMap;

        for(auto& it : nums){
            hashMap[it]++;
        }

        for(auto& it : hashMap){
            if(it.second % 2 != 0){
                return false;
            }
        }
        return true;
        */

        // Since constraints are 500 we can use frequency array
        int frequency[501]={0};
        for(int i=0;i<n;i++){
            frequency[nums[i]]++;
        }
        for(int i=1;i<=500;i++){
            if(frequency[i]%2 != 0){
                return false;
            }
        }
        return true;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/divide-array-into-equal-pairs/)