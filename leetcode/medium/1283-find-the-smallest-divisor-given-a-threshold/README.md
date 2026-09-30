# Find the Smallest Divisor Given a Threshold

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an array of integers `nums` and an integer `threshold`, we will choose a positive integer `divisor`, divide all the array by it, and sum the division's result. Find the  **smallest**  `divisor` such that the result mentioned above is less than or equal to `threshold`.

Each result of the division is rounded to the nearest integer greater than or equal to that element. (For example: `7/3 = 3` and `10/2 = 5`).

The test cases are generated so that there will be an answer.

 

 **Example 1:** 

```
Input: nums = [1,2,5,9], threshold = 6
Output: 5
Explanation: We can get a sum to 17 (1+2+5+9) if the divisor is 1. 
If the divisor is 4 we can get a sum of 7 (1+1+2+3) and if the divisor is 5 the sum will be 5 (1+1+1+2). 

```

 **Example 2:** 

```
Input: nums = [44,22,33,11,1], threshold = 5
Output: 44

```

 

 **Constraints:** 

- 1 <= nums.length <= 5 * 104
- 1 <= nums[i] <= 106
- nums.length <= threshold <= 106

## Solution

**Language:** C++  
**Runtime:** 10 ms (beats 43.54%)  
**Memory:** 26 MB (beats 79.52%)  
**Submitted:** 2026-09-30T05:34:08.790Z  

```cpp
class Solution {
public:
    int maxElement(vector<int>& nums){
        int maxEle=INT_MIN;
        for(auto it : nums){
            maxEle=max(maxEle,it);
        }
        return maxEle;
    }

    long long sumDiv(vector<int>& nums,int divisor){
        long long sum=0;
        for(auto it : nums){
            sum += ceil(double(it)/double(divisor));
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int start=1;
        int end=maxElement(nums);
        int ans=end;

        while(start<=end){
            int mid=start+(end-start)/2;
            long long divSum=sumDiv(nums,mid);

            if(divSum<=threshold){
                ans=mid;
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        return ans;

    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/)