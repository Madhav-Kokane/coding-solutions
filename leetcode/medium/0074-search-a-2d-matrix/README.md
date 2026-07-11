# Search a 2D Matrix

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given an `m x n` integer matrix `matrix` with the following two properties:

- Each row is sorted in non-decreasing order.
- The first integer of each row is greater than the last integer of the previous row.

Given an integer `target`, return `true`  *if*  `target`  *is in*  `matrix`  *or*  `false`  *otherwise*.

You must write a solution in `O(log(m * n))` time complexity.

 

 **Example 1:** 

```
Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
Output: true

```

 **Example 2:** 

```
Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 13
Output: false

```

 

 **Constraints:** 

- m == matrix.length
- n == matrix[i].length
- 1 <= m, n <= 100
- -104 <= matrix[i][j], target <= 104

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 13.3 MB (beats 79.12%)  
**Submitted:** 2026-07-11T08:07:30.153Z  

```cpp
class Solution {
public:
    bool isPresent(vector<vector<int>>& matrix,int target,int i){
        int start=0;
        int end=matrix[0].size()-1;

        while(start<=end){
            int mid=start+(end-start)/2;

            if(matrix[i][mid] < target){
                start=mid+1;
            }else if(matrix[i][mid] > target){
                end=mid-1;
            }else{
                return true;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rowSize=matrix.size();
        int colSize=matrix[0].size();
        bool flag=false;
        for(int i=0;i<rowSize;i++){
            if(matrix[i][0]<=target && matrix[i][colSize-1]>=target){
                flag=isPresent(matrix,target,i);
                if(flag){
                    return true;
                }
            }
        }
        return false;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/search-a-2d-matrix/)