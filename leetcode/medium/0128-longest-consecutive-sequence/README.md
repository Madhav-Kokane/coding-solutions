# Longest Consecutive Sequence

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an unsorted array of integers `nums`, return  *the length of the longest consecutive elements sequence.* 

You must write an algorithm that runs in `O(n)` time.

 

 **Example 1:** 

```
Input: nums = [100,4,200,1,3,2]
Output: 4
Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. Therefore its length is 4.

```

 **Example 2:** 

```
Input: nums = [0,3,7,2,5,8,4,6,0,1]
Output: 9

```

 **Example 3:** 

```
Input: nums = [1,0,1,2]
Output: 3

```

 

 **Constraints:** 

- 0 <= nums.length <= 105
- -109 <= nums[i] <= 109

## Solution

**Language:** C++  
**Runtime:** 95 ms (beats 16.04%)  
**Memory:** 89 MB (beats 48.96%)  
**Submitted:** 2026-09-27T06:13:02.171Z  

```cpp
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> hashSet;
        for(auto it : nums){
            hashSet.insert({it});
        }

        
        int maxcount=0;

        for(auto it : hashSet){
            int num=it;
            int count=0;
            if(hashSet.find(num-1) == hashSet.end()){
                while(hashSet.find(num) != hashSet.end()){
                    count++;
                    num++;
                }
                maxcount=max(maxcount,count);
            }
        }
        return maxcount;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/longest-consecutive-sequence/)