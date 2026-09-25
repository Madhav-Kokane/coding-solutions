# Matrix Diagonal Sum

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a square matrix `mat`, return the sum of the matrix diagonals.

Only include the sum of all the elements on the primary diagonal and all the elements on the secondary diagonal that are not part of the primary diagonal.

 

 **Example 1:** 

```
Input: mat = [[1,2,3],
              [4,5,6],
              [7,8,9]]
Output: 25
Explanation: Diagonals sum: 1 + 5 + 9 + 3 + 7 = 25
Notice that element mat[1][1] = 5 is counted only once.

```

 **Example 2:** 

```
Input: mat = [[1,1,1,1],
              [1,1,1,1],
              [1,1,1,1],
              [1,1,1,1]]
Output: 8

```

 **Example 3:** 

```
Input: mat = [[5]]
Output: 5

```

 

 **Constraints:** 

- n == mat.length == mat[i].length
- 1 <= n <= 100
- 1 <= mat[i][j] <= 100

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 14.8 MB (beats 83.45%)  
**Submitted:** 2026-09-25T07:01:31.595Z  

```cpp
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int rowSize=mat.size();
        int colSize=mat[0].size();

        int sum=0;
        for(int i=0;i<rowSize;i++){
            for(int j=0;j<colSize;j++){
                if(i==j || i+j==(rowSize-1)){
                    sum+=mat[i][j];
                }
            }
        }
        return sum;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/matrix-diagonal-sum/)