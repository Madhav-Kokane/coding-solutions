# House Robber

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed, the only constraint stopping you from robbing each of them is that adjacent houses have security systems connected and  **it will automatically contact the police if two adjacent houses were broken into on the same night**.

Given an integer array `nums` representing the amount of money of each house, return  *the maximum amount of money you can rob tonight  **without alerting the police***.

 

 **Example 1:** 

```
Input: nums = [1,2,3,1]
Output: 4
Explanation: Rob house 1 (money = 1) and then rob house 3 (money = 3).
Total amount you can rob = 1 + 3 = 4.

```

 **Example 2:** 

```
Input: nums = [2,7,9,3,1]
Output: 12
Explanation: Rob house 1 (money = 2), rob house 3 (money = 9) and rob house 5 (money = 1).
Total amount you can rob = 2 + 9 + 1 = 12.

```

 

 **Constraints:** 

- 1 <= nums.length <= 100
- 0 <= nums[i] <= 400

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 10.6 MB (beats 45.34%)  
**Submitted:** 2026-10-06T10:56:30.990Z  

```cpp
class Solution {
public:
    int memoizedSoln(int i,vector<int>& nums,vector<int>& temp){
        if(i<0){
            return 0;
        }

        if(i==0){
            return nums[i];
        }

        if(temp[i] != -1){
            return temp[i];
        }

        int pick=nums[i]+memoizedSoln(i-2,nums,temp);
        int notPick=memoizedSoln(i-1,nums,temp);

        temp[i]=max(pick,notPick);
        return temp[i];
    }
    int recSoln(int i,vector<int>& nums){
        if(i<0){
            return 0;
        }

        if(i==0){
            return nums[i];
        }

        int pick=nums[i]+recSoln(i-2,nums);
        int notPick=0+recSoln(i-1,nums);
        return max(pick,notPick);
    }
    int rob(vector<int>& nums) {
        int n=nums.size()-1;
        // return recSoln(n,nums);
        vector<int> temp(n+1,-1);
        return memoizedSoln(n,nums,temp);
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/house-robber/)