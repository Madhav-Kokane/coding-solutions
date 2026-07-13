# Q2. Maximum Valid Pair Sum

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given an integer array `nums` of length `n` and an integer `k`.

A pair of indices `(i, j)` is called  **valid**  if:

- 0 <= i < j < n
- j - i >= k

Return the  **maximum**  value of `nums[i] + nums[j]` among all valid pairs.

 

 **Example 1:** 

 **Input:**  nums = [1,3,5,2,8], k = 2

 **Output:**  13

 **Explanation:** 

The valid pairs are:

- (0, 2): nums[0] + nums[2] = 6
- (0, 3): nums[0] + nums[3] = 3
- (0, 4): nums[0] + nums[4] = 9
- (1, 3): nums[1] + nums[3] = 5
- (1, 4): nums[1] + nums[4] = 11
- (2, 4): nums[2] + nums[4] = 13

Thus, the answer is 13.​​​​​​​

 **Example 2:** 

 **Input:**  nums = [5,1,9], k = 1

 **Output:**  14

 **Explanation:** 

- Since k = 1, every pair is valid.
- The maximum value is obtained from a pair (0, 2)​​​​​​​, which is nums[0] + nums[2] = 5 + 9 = 14.
- Thus, the answer is 14.

 

 **Constraints:** 

- 2 <= n == nums.length <= 105
- 1 <= nums[i] <= 109
- 1 <= k <= n - 1

## Solution

**Language:** C++  
**Runtime:** 9 ms (beats 19.68%)  
**Memory:** 215.2 MB (beats 41.18%)  
**Submitted:** 2026-07-13T17:20:17.247Z  

```cpp
class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        int n=nums.size();
        // BRUTE FORCE
        /*
        int maxVal=INT_MIN;
        for(int i=0;i<n;i++){
            for(int j=i+k;j<n;j++){
                int temp=nums[i]+nums[j];
                maxVal=max(maxVal,temp);
            }
        }
        return maxVal;
        */

        vector<int> suffixMax(n);
        suffixMax[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            suffixMax[i]=max(nums[i],suffixMax[i+1]);
        }

        int maxVal=INT_MIN;
        for(int i=0;i+k<n;i++){
            int temp=nums[i]+suffixMax[i+k];
            maxVal=max(maxVal,temp);
        }
        return maxVal;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/maximum-valid-pair-sum/)