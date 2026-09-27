# 4Sum

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an array `nums` of `n` integers, return  *an array of all the  **unique**  quadruplets*  `[nums[a], nums[b], nums[c], nums[d]]` such that:

- 0 <= a, b, c, d < n
- a, b, c, and d are distinct.
- nums[a] + nums[b] + nums[c] + nums[d] == target

You may return the answer in  **any order**.

 

 **Example 1:** 

```
Input: nums = [1,0,-1,0,-2,2], target = 0
Output: [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]

```

 **Example 2:** 

```
Input: nums = [2,2,2,2,2], target = 8
Output: [[2,2,2,2]]

```

 

 **Constraints:** 

- 1 <= nums.length <= 200
- -109 <= nums[i] <= 109
- -109 <= target <= 109

## Solution

**Language:** C++  
**Runtime:** 0 ms  
**Memory:** 8.4 MB  
**Submitted:** 2026-09-27T04:49:23.907Z  

```cpp
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> result;

        int n=nums.size();
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }

            for(int j=i+1;j<n;j++){
                if(j>i+1 &&  nums[j]==nums[j-1]){
                    continue;
                }

                int start=j+1;
                int end=n-1;

                while(start<end){
                    int sum=nums[i]+nums[j]+nums[start]+nums[end];
                    if(sum == target){
                        result.push_back({nums[i],nums[j],nums[start],nums[end]});
                        start++;
                        end--;

                        while(start<end && nums[start]==nums[start-1]){
                            start++;
                        }

                        while(start<end && nums[end]==nums[end+1]){
                            end--;
                        }
                    }else if(sum<0){
                        start++;
                    }else{
                        end--;
                    }
                }
            }
        }
        return result;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/4sum/)