# Permutations

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an array `nums` of distinct integers, return all the possible permutations. You can return the answer in  **any order**.

 

 **Example 1:** 

```
Input: nums = [1,2,3]
Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]

```

 **Example 2:** 

```
Input: nums = [0,1]
Output: [[0,1],[1,0]]

```

 **Example 3:** 

```
Input: nums = [1]
Output: [[1]]

```

 

 **Constraints:** 

- 1 <= nums.length <= 6
- -10 <= nums[i] <= 10
- All the integers of nums are unique.

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 10.6 MB (beats 70.36%)  
**Submitted:** 2026-09-23T06:50:10.207Z  

```cpp
class Solution {
public:
    void solve(int ind,vector<int>& nums,vector<vector<int>>& result){
        if(ind==nums.size()){
            result.push_back(nums);
            return;
        }

        for(int i=ind;i<nums.size();i++){
            swap(nums[i],nums[ind]);
            solve(ind+1,nums,result);
            swap(nums[i],nums[ind]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        int ind=0;
        solve(0,nums,result);
        return result;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/permutations/)