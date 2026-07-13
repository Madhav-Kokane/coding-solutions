# Q1. Unique Middle Element

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You are given an integer array `nums` of odd length `n`.

Return `true` if the middle element of `nums` appears  **exactly**  once in the array. Otherwise return `false`.

 

 **Example 1:** 

 **Input:**  nums = [1,2,3]

 **Output:**  true

 **Explanation:** 

The middle element of `nums` is 2, which appears exactly once.

Thus, the answer is `true`.

 **Example 2:** 

 **Input:**  nums = [1,2,2]

 **Output:**  false

 **Explanation:** 

The middle element of `nums` is 2, which appears twice.

Thus, the answer is `false`.

 

 **Constraints:** 

- 1 <= n == nums.length <= 100
- n is odd.
- 1 <= nums[i] <= 100

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 31 MB (beats 99.44%)  
**Submitted:** 2026-07-13T16:56:46.312Z  

```cpp
class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int n=nums.size();
        int mid=n/2;
        int midValue=nums[mid];
        int cnt=0;
        for(int i=0;i<n;i++){
            if(nums[i] == midValue){
                cnt++;
            }

            if(cnt>1){
                return false;
            }
        }
        return true;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/unique-middle-element/)