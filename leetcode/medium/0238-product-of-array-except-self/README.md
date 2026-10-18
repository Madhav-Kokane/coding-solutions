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

**Language:** Java  
**Runtime:** 8 ms (beats 2.96%)  
**Memory:** 70.7 MB (beats 69.49%)  
**Submitted:** 2026-10-18T13:00:23.970Z  

```java
class Solution {
    public int[] productExceptSelf(int[] nums) {
        int n=nums.length;
        if(n==1){
            return new int[]{1};
        }
        ArrayList<Integer> lTor=new ArrayList<>();
        int prod=1;
        for(int i=0;i<n;i++){
            prod=prod*nums[i];
            lTor.add(prod);
        }


        prod=1;
        ArrayList<Integer> rToL=new ArrayList<>(Collections.nCopies(n,0));
        for(int i=n-1;i>=0;i--){
            prod=prod*nums[i];
            rToL.set(i,prod);
        } 

        // ArrayList<Integer> ans=new ArrayList<>(n);
        int[] ans=new int[n];
        for(int i=0;i<n;i++){
            if(i==0){
                ans[i]=rToL.get(i+1);
            }else if(i == n-1){
                ans[i]=lTor.get(i-1);
            }else{
                ans[i]=lTor.get(i-1)*rToL.get(i+1);
            }
        }
        return ans;
    }
}
```

---

[View on LeetCode](https://leetcode.com/problems/product-of-array-except-self/)