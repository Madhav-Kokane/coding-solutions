# Q3. Maximum Subarray Sum After Multiplier

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given an integer array `nums` and a positive integer `k`.

You must choose  **exactly**  one subarray of `nums` and perform  **exactly**  one of the following operations:

- Multiply each number in the chosen subarray by k.
- Divide each number in the chosen subarray by k. When dividing a positive number by k, use the floor value of the division result. When dividing a negative number by k, use the ceiling value of the division result.

Return the  **maximum**  possible sum of a  **non-empty**  subarray in the resulting array.

Note that the subarray chosen for the operation and the subarray chosen for the sum may be  **different**.

 

 **Example 1:** 

 **Input:**  nums = [1,-2,3,4,-5], k = 2

 **Output:**  14

 **Explanation:** 

- Multiply each number in the subarray [3, 4] by 2.
- This results in nums = [1, -2, 6, 8, -5].
- The subarray with the largest sum is [6, 8], so the output is 6 + 8 = 14.

 **Example 2:** 

 **Input:**  nums = [-5,-4,-3], k = 2

 **Output:**  -1

 **Explanation:** 

- Divide each number in the subarray [-3] by 2.
- This results in nums = [-5, -4, -1].
- The subarray with the largest sum is [-1], so the output is -1.

 

 **Constraints:** 

- 1 <= nums.length <= 105
- -105 <= nums[i] <= 105
- 1 <= k <= 105

## Solution

**Language:** C++  
**Runtime:** 0 ms  
**Memory:** 8.2 MB  
**Submitted:** 2026-07-14T05:00:53.815Z  

```cpp
class Solution {
public:
    long long maxSubarraySum(vector<int>& nums, int k) {
        int m=k;
        sort(nums.begin(),nums.end());
        long long sum1=0;
        int n=nums.size()-1;
        int i=n;

        while(i>=0 && k>0){
            // int temp=(long long)nums[i]*m;
            sum1 += (long long)nums[i]*m;
            i--;
            k--;
        }
        
        k=m;
        long long sum2=0;
        int j=0;
        while(j<=n && k>0){
            // int temp2=0;
            if(nums[j] >= 0){
                // temp2=temp2+floor((double)nums[j] / m);
                sum2 += floor((double)nums[j] / m);
            }else{
                // temp2=temp2+ceil((double)nums[j]/m);
                sum2 += ceil((double)nums[j] / m);
            }

            // sum2 += temp2;
            k--;
            j++;
        }

        return max(sum1,sum2);
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/maximum-subarray-sum-after-multiplier/)