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
**Memory:** 10.1 MB (beats 38.23%)  
**Submitted:** 2026-09-22T08:51:17.308Z  

```cpp
class Solution {
public:
    void soln(int i,int n,vector<int>& nums,vector<vector<int>>& result,vector<int>& sub){
        if(i==n){
            result.push_back(sub);
            return;
        }

        sub.push_back(nums[i]);
        soln(i+1,n,nums,result,sub);
        sub.pop_back();
        soln(i+1,n,nums,result,sub);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> sub;
        int n=nums.size();

        soln(0,n,nums,result,sub);
        return result;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/subsets/)