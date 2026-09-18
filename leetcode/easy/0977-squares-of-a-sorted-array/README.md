# Squares of a Sorted Array

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an integer array `nums` sorted in  **non-decreasing**  order, return  *an array of  **the squares of each number**  sorted in non-decreasing order*.

 

 **Example 1:** 

```
Input: nums = [-4,-1,0,3,10]
Output: [0,1,9,16,100]
Explanation: After squaring, the array becomes [16,1,0,9,100].
After sorting, it becomes [0,1,9,16,100].

```

 **Example 2:** 

```
Input: nums = [-7,-3,2,3,11]
Output: [4,9,9,49,121]

```

 

 **Constraints:** 

- 1 <= nums.length <= 104
- -104 <= nums[i] <= 104
- nums is sorted in non-decreasing order.

 

 **Follow up:**  Squaring each element and sorting the new array is very trivial, could you find an `O(n)` solution using a different approach?

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 31.8 MB (beats 9.41%)  
**Submitted:** 2026-09-18T09:17:52.503Z  

```cpp
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        /*
        vector<int> negSquare;
        // int k=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] < 0){
                negSquare.push_back(nums[i]*nums[i]);
            }
        }

        

        vector<int> posSquare;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                posSquare.push_back(nums[i]*nums[i]);
            }
        }

        if(negSquare.empty()){
            return posSquare;
        }
    

        int i=0,j=0;
        int n=nums.size();
        int k=0;


        vector<int> result(n);
        while(i<n && j<n){
            if(negSquare[i]<=posSquare[j]){
                result[k++]=negSquare[i];
                i++;
            }else{
                result[k++]=posSquare[j];
                j++;
            }
        }

        while(i<n){
            result[k++]=negSquare[i++];
        }

        while(j<n){
            result[k++]=posSquare[j++];
        }
        
        return result;
        */

        int n=nums.size();
        vector<int> neg;
        vector<int> pos;
        int i=0;
        while(i<n && nums[i]<0){
            neg.push_back(nums[i]*nums[i]);
            i++;
        }

        while(i<n && nums[i]>=0){
            pos.push_back(nums[i]*nums[i]);
            i++;
        }

        int negSize=neg.size();
        int posSize=pos.size();

        int currIndex=n-1;
        int k=pos.size()-1;
        int j=0;
        vector<int> result(n);
        while(j<negSize && k>=0 &&  currIndex>=0){
            if(pos[k] > neg[j]){
                result[currIndex]=pos[k];
                k--;
                currIndex--;
            }else{
                result[currIndex]=neg[j];
                j++;
                currIndex--;
            }
        }

        while(j<negSize){
            result[currIndex]=neg[j];
            j++;
            currIndex--;
        }

        while(k>=0){
            result[currIndex]=pos[k];
            k--;
            currIndex--;
        }

        return result;

    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/squares-of-a-sorted-array/)