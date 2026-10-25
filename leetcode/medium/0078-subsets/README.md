# Subsets

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an integer array `nums` of  **unique**  elements, return  *all possible*   *subsets*   *(the power set)*.

The solution set  **must not**  contain duplicate subsets. Return the solution in  **any order**.

 

 **Example 1:** 

```
Input: nums = [1,2,3]
Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]

```

 **Example 2:** 

```
Input: nums = [0]
Output: [[],[0]]

```

 

 **Constraints:** 

- 1 <= nums.length <= 10
- -10 <= nums[i] <= 10
- All the numbers of nums are unique.

## Solution

**Language:** C++  
**Runtime:** 1 ms (beats 45.73%)  
**Memory:** 10 MB (beats 59.08%)  
**Submitted:** 2026-10-25T06:46:47.173Z  

```cpp
class Solution {
public:
    void recSoln(int i,vector<int>& nums,vector<int>& temp,vector<vector<int>>& result){

        if(i==nums.size()){
            result.push_back(temp);
            return;
        }

        temp.push_back(nums[i]);
        recSoln(i+1,nums,temp,result);
        temp.pop_back();
        recSoln(i+1,nums,temp,result);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> temp;
        recSoln(0,nums,temp,result);
        return result;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/subsets/)