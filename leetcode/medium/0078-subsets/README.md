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
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 9.8 MB (beats 95.86%)  
**Submitted:** 2026-10-09T08:17:29.472Z  

```cpp
class Solution {
public:
    void buildSoln(int i,int n,vector<int>& temp,vector<int>& nums,vector<vector<int>>& result){
        if(i==n){
            result.push_back(temp);
            return;
        }

        temp.push_back(nums[i]);
        buildSoln(i+1,n,temp,nums,result);
        temp.pop_back();
        buildSoln(i+1,n,temp,nums,result);

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        int n=nums.size();
        vector<int> temp;
        buildSoln(0,n,temp,nums,result);
        return result;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/subsets/)