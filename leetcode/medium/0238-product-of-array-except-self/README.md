# Product of Array Except Self

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an integer array `nums`, return  *an array*  `answer`  *such that*  `answer[i]`  *is equal to the product of all the elements of*  `nums`  *except*  `nums[i]`.

The product of any prefix or suffix of `nums` is  **guaranteed**  to fit in a  **32-bit**  integer.

You must write an algorithm that runs in `O(n)` time and without using the division operation.

 

 **Example 1:** 

```
Input: nums = [1,2,3,4]
Output: [24,12,8,6]

```

 **Example 2:** 

```
Input: nums = [-1,1,0,-3,3]
Output: [0,0,9,0,0]

```

 

 **Constraints:** 

- 2 <= nums.length <= 105
- -30 <= nums[i] <= 30
- The input is generated such that answer[i] is guaranteed to fit in a 32-bit integer.

 

 **Follow up:**  Can you solve the problem in `O(1)` extra space complexity? (The output array  **does not**  count as extra space for space complexity analysis.)

## Solution

**Language:** C++  
**Runtime:** 4 ms (beats 21.05%)  
**Memory:** 43.8 MB (beats 5.09%)  
**Submitted:** 2026-09-03T09:30:37.128Z  

```cpp
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod=1;
        int n=nums.size();
        vector<int> preProd;
        for(auto it:nums){
            prod=prod*it;
            preProd.push_back(prod);
        }


        vector<int> sufProd(n);
        prod=1;
        for(int i=n-1;i>=0;i--){
            prod*=nums[i];
            sufProd[i]=prod;
        }

        vector<int> result(n);
        for(int i=0;i<n;i++){
            if(i==0){
                result[i]=sufProd[i+1];
            }else if(i==n-1){
                result[i]=preProd[n-2];
            }else{
                result[i]=preProd[i-1]*sufProd[i+1];
            }
            
        }
        return result;

    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/product-of-array-except-self/)