# Median of Two Sorted Arrays

![Difficulty](https://img.shields.io/badge/Difficulty-Hard-red)

## Problem

Given two sorted arrays `nums1` and `nums2` of size `m` and `n` respectively, return  **the median**  of the two sorted arrays.

The overall run time complexity should be `O(log (m+n))`.

 

 **Example 1:** 

```
Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2.

```

 **Example 2:** 

```
Input: nums1 = [1,2], nums2 = [3,4]
Output: 2.50000
Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.

```

 

 **Constraints:** 

- nums1.length == m
- nums2.length == n
- 0 <= m <= 1000
- 0 <= n <= 1000
- 1 <= m + n <= 2000
- -106 <= nums1[i], nums2[i] <= 106

## Solution

**Language:** C++  
**Runtime:** 5 ms (beats 11.80%)  
**Memory:** 96.1 MB (beats 9.57%)  
**Submitted:** 2026-07-10T08:36:38.554Z  

```cpp
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        /*
        //BRUTE FORCE
        int m=nums1.size();
        int n=nums2.size();
        double sum1=0,sum2=0;
        for(int i=0;i<m;i++){
            sum1+=nums1[i];
        }
        for(int i=0;i<n;i++){
            sum2+=nums2[i];
        }

        int totalSize=m+n;
        double ans=(sum1+sum2)/totalSize;
        return ans;
        */

        vector<int> result;
        int m=nums1.size();
        int n=nums2.size();
        int i=0,j=0;
        while(i<m && j<n){
            if(nums1[i]<=nums2[j]){
                result.push_back(nums1[i]);
                i++;
            }
            else{
                result.push_back(nums2[j]);
                j++;
            }
        }

        while(i<m){
            result.push_back(nums1[i]);
            i++;
        }

        while(j<n){
            result.push_back(nums2[j]);
            j++;
        }

        int tot=result.size();
        double ans=0;
        if(tot%2 == 0){
            int ind=tot/2;
            ans=result[ind-1]+result[ind];
            ans=ans/2;
        }
        else{
            int ind=tot/2;
            ans=result[ind];
        }
        return ans;
        
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/median-of-two-sorted-arrays/)